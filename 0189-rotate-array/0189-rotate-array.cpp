class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    k=k%nums.size();
    int low=0,high=nums.size()-1;
    while(low<high){
        swap(nums[low],nums[high]);
        low++;
        high--;
    }
    low=0;
    high=k-1;
    while(low<high){
        swap(nums[low],nums[high]);
        low++;
        high--;
    }
    low=k;
    high=nums.size()-1;
    while(low<high){
        swap(nums[low],nums[high]);
        low++;
        high--;
    }
    }
};