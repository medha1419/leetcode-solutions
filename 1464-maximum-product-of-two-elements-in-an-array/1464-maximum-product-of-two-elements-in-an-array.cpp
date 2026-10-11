class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxn=0;
    int ind=0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]>maxn){
            maxn=nums[i];
            ind=i;
        }
    }
    int max2=0;
    for(int i=0;i<nums.size();++i){
        if(i==ind){
            continue;
        }
        else if(nums[i]>max2){
            max2=nums[i];
        }
    }
    return (maxn-1)*(max2-1);
    }
};