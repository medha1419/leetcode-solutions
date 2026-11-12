class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
	int low = 0, high = 0, ans = 0;
	deque<int> maxi, mini;
	while(high<nums.size()){
		while(!maxi.empty() && nums[maxi.back()]<nums[high]){
			maxi.pop_back();
		}
		while(!mini.empty() && nums[mini.back()]>nums[high]){
			mini.pop_back();
		}
		maxi.push_back(high);
		mini.push_back(high);
		while(nums[maxi.front()]-nums[mini.front()]>limit){
			low++;
			if(maxi.front()<low){
				maxi.pop_front();
			}
			if(mini.front()<low){
				mini.pop_front();
			}
		}
		ans = max(ans, high - low + 1);
		high++;
	}
	return ans;
}
};