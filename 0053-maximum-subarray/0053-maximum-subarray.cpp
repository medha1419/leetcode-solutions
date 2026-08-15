class Solution {
public:
    int maxSubArray(vector<int>& nums){
    int maxsum=nums[0],maxtilnow=0;
    for(int i=0;i<nums.size();++i){
        maxtilnow=max(maxtilnow+nums[i],nums[i]);
        maxsum=max(maxsum,maxtilnow);
    }
    return maxsum;
}
};