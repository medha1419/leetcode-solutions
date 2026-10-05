class Solution {
public:
    int lengthOfLongestSubstring(string s){
    int low=0,high=0;
    unordered_map<char,int> mp;
    int count=0;
    while(high<s.size()){
        mp[s[high]]++;
        while(mp[s[high]]>1){
            mp[s[low]]--;
            low++;
        }
        count=max(count,high-low+1);
        high++;
    }
    return count;
}
};