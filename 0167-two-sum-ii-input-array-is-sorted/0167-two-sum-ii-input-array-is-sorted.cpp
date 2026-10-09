class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0,high=numbers.size()-1;
    vector<int> result;
    while(low<high){
        if(numbers[low]+numbers[high]>target){
            high--;
        }
        else if(numbers[low]+numbers[high]<target){
            low++;
        }
        else{
            result={low+1,high+1};
            break;
        }
    }
    return result;
    }
};