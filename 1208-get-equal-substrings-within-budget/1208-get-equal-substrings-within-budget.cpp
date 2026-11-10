class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
	int low = 0, high = 0, ans = 0, sum = 0;
	while(high<s.size()){
		sum += abs(s[high] - t[high]);
		while(sum>maxCost){
			sum -= abs(s[low] - t[low]);
			low++;
		}
		ans = max(ans, high - low + 1);
		high++;
	}
	return ans;
}
};