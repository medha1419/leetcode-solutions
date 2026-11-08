class Solution {
public:
    int triangleNumber(vector<int>& nums){
	sort(nums.begin(), nums.end());
	int high = nums.size() - 1, ans = 0;
	while(high>-2){
		int low = 0, mid = high - 1;
		while(mid>low){
			if(nums[low]+nums[mid]>nums[high]){
				ans += mid - low;
				mid--;
			}
			else{
				low++;
			}
		}
		high--;
	}
	return ans;
}
};