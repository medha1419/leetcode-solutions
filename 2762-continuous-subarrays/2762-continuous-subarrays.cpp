class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
	int low = 0, high = 0;
	long long ans = 0;
	deque<int> mini, maxi;
	while(high<nums.size()){
		while(!maxi.empty() && nums[maxi.back()]<nums[high]){
			maxi.pop_back();
		}
		while(!mini.empty() && nums[mini.back()]>nums[high]){
			mini.pop_back();
		}
		maxi.push_back(high);
		mini.push_back(high);
		while(nums[maxi.front()]-nums[mini.front()]>2){
			low++;
			if(maxi.front()<low){
				maxi.pop_front();
			}
			if(mini.front()<low){
				mini.pop_front();
			}
			
		}
        ans += high - low + 1;
			high++;
	}
	return ans;
}
};