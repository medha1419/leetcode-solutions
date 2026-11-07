class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
	int ans = 0, low = 0, high = 0,sum=0;
	for (int i = 0; i < nums.size();++i){
		sum += nums[i];
	}
	int res = (sum == x) ? 0 : -1;
	while (high < nums.size())
	{
		ans+= nums[high];
		while(low<=high && sum-ans<x){
			ans -= nums[low];
			low++;
		}
		if(sum-ans==x)res = max(res, high - low + 1);
		high++;
	}
	if(res==-1)
		return -1;
	return nums.size() - res;
}
};