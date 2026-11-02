class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeroes=0,ones=0;
    int low=0,high=0, res=0;
    while(high<nums.size()){
        if(nums[high]==0) zeroes++;
        else ones++;
        while(zeroes>1){
            if(nums[low]==0) zeroes--;
            else ones--;
            low++;
        }
        if(zeroes==1) res=max(res,ones);
        else res=max(res,ones-1);
        high++;
    }
    return res;
    }
};