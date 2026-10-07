class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int count=0;
        for(int x:nums){
            count+=x;
            result.push_back(count);
        }
        return result;
    }
};