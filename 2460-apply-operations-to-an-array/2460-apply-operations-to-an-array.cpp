class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;++i){
        if(nums[i]==nums[i+1]){
            nums[i]*=2;
            nums[i+1]=0;
        }
    }
    int i=0,k=0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]!=0){
            nums[k]=nums[i];
            k++;
        }
    }
    while(k<nums.size()){
        nums[k]=0;
        k++;
    }
    return nums;
    }
};