class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
    vector<int> odd;
    vector<int> result;
    for(int y:nums){
        if(y%2==0){
            even.push_back(y);
        }
        else{
            odd.push_back(y);
        }
    }
    for(int i=0;i<nums.size()/2;++i){
        result.push_back(even[i]);
        result.push_back(odd[i]);
    }
    return result;
    }
};