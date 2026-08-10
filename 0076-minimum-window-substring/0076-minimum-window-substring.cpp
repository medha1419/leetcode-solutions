class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> target_map;
        for(char c :t){
            target_map[c]++;
        }
        int need=target_map.size();
        int have=0;
        unordered_map<char,int> window_map;
        int startindex=0;
        int min_len=INT_MAX;
        int low=0;
        for(int high=0;high<s.length();high++){
            char right_char=s[high];
            window_map[right_char]++;
            if(target_map.count(right_char) && window_map[right_char]==target_map[right_char]){
                have++;
            }
            while(have==need){
                int current_window_len=high-low+1;
                if(current_window_len<min_len){
                    min_len=current_window_len;
                    startindex=low;
                }
                char left_char=s[low];
                window_map[left_char]--;
                if (target_map.count(left_char) && window_map[left_char] < target_map[left_char]) {
            have--; // The window is no longer valid, stop shrinking
        }
        low++;
            }
        }
        if (min_len == INT_MAX) {
    return ""; 
} else {
    return s.substr(startindex, min_len); 
}
}
};