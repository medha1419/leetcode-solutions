class Solution {
public:
    int balancedString(string s) {
        unordered_map<char,int> mp;

        for(char c : s) {
            mp[c]++;
        }

        int n = s.size();
        int req = n / 4;

        if(mp['Q'] == req && mp['W'] == req &&
           mp['E'] == req && mp['R'] == req) {
            return 0;
        }

        int low = 0, high = 0, ans = n;

        while(high < n) {
            mp[s[high]]--;

            while(low <= high &&
                  mp['Q'] <= req &&
                  mp['W'] <= req &&
                  mp['E'] <= req &&
                  mp['R'] <= req) {

                ans = min(ans, high - low + 1);

                mp[s[low]]++;
                low++;
            }

            high++;
        }

        return ans;
    }
};