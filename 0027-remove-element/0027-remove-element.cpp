class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
    int k=0;
        for(int i=0;i<n;++i){
            if(nums[i]!=val){
                nums.push_back(nums[i]);
                k++;
            }
        }
int low=0,high=nums.size()-1;
while(low<high){
    swap(nums[low],nums[high]);
    low++;
    high--;
}
        return k;
    }
};