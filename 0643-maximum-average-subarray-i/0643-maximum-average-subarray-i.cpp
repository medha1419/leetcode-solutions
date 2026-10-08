class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0;
    int sum=0;
    double avg=-DBL_MAX;
    for(int high=0;high<nums.size();++high){
        sum+=nums[high];
        if(high-low+1>k){
            sum-=nums[low];
            low++;
        }
        if(high-low+1==k){
            double curravg=(double)sum/k;
            avg=max(avg,curravg);
        }
    }  
    return avg;        
    }
};