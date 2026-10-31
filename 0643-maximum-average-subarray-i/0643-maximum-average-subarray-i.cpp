class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res=-DBL_MAX;
    int sum=0;
    int low=0,high=0;
    while(high<nums.size()){
        sum+=nums[high];
        if(high-low+1==k){
            res=max(res,(double)sum/k);
            sum-=nums[low];
            low++;
        }
        high++;
    }
    return res;       
    }
};