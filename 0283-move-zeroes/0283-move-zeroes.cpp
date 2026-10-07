class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int k=0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]==0){
            k++;
            nums.erase(nums.begin()+i);
            --i;
        }
    }
    for(int i=0;i<k;++i){
        nums.push_back(0);
    }
    }
};