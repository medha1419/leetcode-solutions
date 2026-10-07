class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result;
        vector<int> even;
        vector<int>odd;
        for(int x:nums){
            if(x%2==0){
                even.push_back(x);
            }
            else{
                odd.push_back(x);
            }
        }
        for(int x:even){
            result.push_back(x);
        }
        for(int x:odd){
            result.push_back(x);
        }
        return result;
    }
};