class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int res=0;
        unordered_map<char,int> mp;
        for(int high=0;high<s.length();++high){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                low++;
            }
            res=max(res,high-low+1);
        }
        return res;
    }
};