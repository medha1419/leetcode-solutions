class Solution {
public:
    int balancedString(string s){
	int low = 0, high = 0, ans = s.size(), req=s.size()/4;
	unordered_map<char, int> mp;
	for(char c:s){
		mp[c]++;
	}
	if(mp['Q'] == req && mp['W'] == req &&
           mp['E'] == req && mp['R'] == req) {
            return 0;
    }
	while(high<s.size()){
		mp[s[high]]--;
		while(low<=high  && mp['Q'] <= req && mp['W'] <= req && mp['E'] <= req && mp['R'] <= req){
			ans = min(ans, high - low + 1);
			mp[s[low]]++;
			low++;
		}
		high++;
	}
	return ans;
}
};