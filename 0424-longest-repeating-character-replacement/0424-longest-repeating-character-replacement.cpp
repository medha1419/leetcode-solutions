class Solution {
public:
    int characterReplacement(string s, int k) {
	int low = 0, high = 0, ans = 0, maxfreq = 0;
	unordered_map<char, int> mp;
	while(high<s.size()){
		mp[s[high]]++;
		maxfreq = max(maxfreq, mp[s[high]]);

		while((high-low+1)-maxfreq>k){
			mp[s[low]]--;
			low++;
		}
		ans = max(ans, high - low + 1);
		high++;
	}
	return ans;
}
};