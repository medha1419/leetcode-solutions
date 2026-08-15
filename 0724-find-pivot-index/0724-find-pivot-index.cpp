class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sums;
    int sum=0;
    for(int i=0;i<nums.size();++i){
        sum+=nums[i];
        sums.push_back(sum);
    }
    for(int i=0;i<nums.size();++i){
        if(sums[i]-nums[i]==sum-sums[i]){
            return i;
        }
    }
    return -1;
    }
};