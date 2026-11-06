class Solution {
public:
    int numberOfSubstrings(string s) {
        int low = 0, high = 0, ans = 0;
        unordered_map<char, int> mp;

        while (high < s.size()) {
            mp[s[high]]++;

            while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0) {
                
                mp[s[low]]--;
                low++;
            }
            ans+=low;
            high++;
        }
        return ans;
    }
};