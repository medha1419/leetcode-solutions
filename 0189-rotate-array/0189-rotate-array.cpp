class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    k=k%nums.size();
    vector<int> vec;
    int ind=nums.size()-k;
    for(int i=ind;i<nums.size();++i){
        vec.push_back(nums[i]);
    }
    for(int i=0;i<ind;++i){
        vec.push_back(nums[i]);
    }
    nums={};
    for(int i=0;i<vec.size();++i){
        nums.push_back(vec[i]);
    }
    }
};