class Solution {
public:
    int takeCharacters(string s, int k) {
	unordered_map<char, int> mp;
	for (char c : s)
	{
		mp[c]++;
	}
	if(mp['a']<k)
		return -1;
	if(mp['b']<k)
		return -1;
	if(mp['c']<k)
		return -1;	
	int low = 0, high = 0, ans = 0;
	while(high<s.size()){
		mp[s[high]]--;
		while(mp[s[high]]<k){
			mp[s[low]]++;
			low++;
		}
		ans = max(ans, high - low + 1);
		high++;
	}
	return s.size() - ans;
}
};