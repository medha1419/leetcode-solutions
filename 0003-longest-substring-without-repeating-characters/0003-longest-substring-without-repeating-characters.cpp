class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0,high=0;
    int size=0;
    unordered_map<char,int> mp;
    while(high<s.length()){

        while(mp[s[high]]>0){
            mp[s[low]]--;
            low++;
        }
        
        mp[s[high]]++;
        size=max(size,high-low+1);
        high++;
    }
    return size;
    }
};