class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int low=0,high=nums.size()-1;
    while(low<nums.size() && high>=0){
        if(low%2==nums[low]%2){
            low+=2;
        }
        else if(high%2==nums[high]%2){
            high-=2;
        }
        else{
            swap(nums[low],nums[high]);
            low+=2;
            high-=2;
        }
    }
    return nums;
    }
};