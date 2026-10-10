class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         int low=0,high=nums.size()-1;
    vector<int> result;
    while(low<=high){
        if(abs(nums[low])>abs(nums[high])){
            result.push_back(nums[low]*nums[low]);
            low++;
        }
        else{
            result.push_back(nums[high]*nums[high]);
            high--;
        }
    }
    low=0,high=result.size()-1;
    while(low<high){
        swap(result[low],result[high]);
        low++;
        high--;
    }
    return result;
    }
};