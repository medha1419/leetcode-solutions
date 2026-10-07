class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int low=0;
    int prod=1;
    int count=0;
    for(int high=0;high<nums.size();++high){
        prod*=nums[high];
        while(prod>=k){
            prod/=nums[low];
            low++;
        }
        count+=high-low+1;
    }
    return count; 
    }
};