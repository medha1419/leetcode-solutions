class Solution {
public:
    int maximumLengthSubstring(string s) {
        int low = 0, high = 0, ans = 0;
	unordered_map<char, int> mp;
	while (high < s.size())
	{
		mp[s[high]]++;
		while(mp[s[high]]>2){
			mp[s[low]]--;
			low++;
		}
		ans = max(ans, high - low + 1);
		high++;
	}
	return ans;
    }
};