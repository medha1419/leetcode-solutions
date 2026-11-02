class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0,high=0;
    int zeroes=0, ones=0, res=0;
    while(high<nums.size()){
        if(nums[high]==0)zeroes++;
        else ones++;
        while(zeroes>k){
            if(nums[low]==0) zeroes--;
            else ones--;
            low++;
        }
        res=max(res,ones+zeroes);
        high++;
    }
    return res;
    }
};