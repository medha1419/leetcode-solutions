class Solution {
public:
    int maxSubArray(vector<int>& nums){
    int maxfin=nums[0],maxcur=0;
    for(int x:nums){
        maxcur=max(maxcur+x,x);
        maxfin=max(maxfin,maxcur);
    }
    return maxfin;
}
};