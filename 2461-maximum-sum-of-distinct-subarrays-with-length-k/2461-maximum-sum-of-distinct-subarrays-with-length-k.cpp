class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    int low=0,high=0;
    long long sum=0;
    long long res=0;
    while(high<nums.size()){
        mp[nums[high]]++;
        sum+=nums[high];
        if(high-low+1==k){
            if(mp.size()==k)res=max(res,sum);
            sum-=nums[low];
            mp[nums[low]]--;
            if(mp[nums[low]]==0){
                mp.erase(nums[low]);
            }
            low++;
        }
        high++;
    }
    return res;
}
};