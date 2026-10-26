class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int high = s.size() - 1, high2 = t.size() - 1;

        while (high >= 0 || high2 >= 0) {
            int shashes = 0;
            while (high >= 0) {
                if (s[high] == '#') {
                    shashes++;
                    high--;
                } else if (shashes > 0) {
                    shashes--;
                    high--;
                } else {
                    break;
                }
            }

            int shashes2 = 0;
            while (high2 >= 0) {
                if (t[high2] == '#') {
                    shashes2++;
                    high2--;
                } else if (shashes2 > 0) {
                    shashes2--;
                    high2--;
                } else {
                    break;
                }
            }

            if (high >= 0 && high2 >= 0) {
                if (s[high] != t[high2]) return false;
            } else if (high >= 0 || high2 >= 0) {
                return false;
            }

            high--;
            high2--;
        }

        return true;
    }
};