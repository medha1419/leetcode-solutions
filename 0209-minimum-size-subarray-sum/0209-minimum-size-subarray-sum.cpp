class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0;
    int sum=0;
    int len=INT_MAX;
    while(high<nums.size()){
        sum+=nums[high];
        high++;
        while(sum>=target){
            len=min(len,high-low);
            sum-=nums[low];
            low++;
        }
    }
    return (len == INT_MAX) ? 0 : len;
    }
};