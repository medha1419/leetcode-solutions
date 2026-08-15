class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pres;
    vector<int> suff;
    int mul=1;
    for(int i=0;i<nums.size();++i){
        pres.push_back(mul);
        mul*=nums[i];
    }
    mul=1;
    
    for(int i=nums.size()-1;i>=0;--i){
        suff.push_back(mul);
        mul*=nums[i];
    }
    vector<int> ans;
    for(int i=0;i<nums.size();++i){
        ans.push_back(pres[i]*suff[nums.size()-1-i]);
    }
    return ans;
    }
};