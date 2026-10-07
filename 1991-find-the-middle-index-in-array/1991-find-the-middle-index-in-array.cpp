class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       vector<int> before(nums.size(),0);
    vector<int> after(nums.size(),0);
    int count1=nums[0];
    for(int i=1;i<nums.size();++i){
        before[i]+=count1;
        count1+=nums[i];
    }
    int count2=nums[nums.size()-1];
    for(int i=nums.size()-2;i>=0;--i){
        after[i]+=count2;
        count2+=nums[i];
    }
    for(int i=0;i<nums.size();++i){
        if(before[i]==after[i]){
            return i;
        }
    }
    return -1; 
    }
};