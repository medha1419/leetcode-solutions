class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
    int low=0,high=0;
    unordered_map<int,int> mp;
    int res=0;
    while(high<nums.size()){
        mp[nums[high]]++;
        while(mp[nums[high]]>k){
            mp[nums[low]]--;
            low++;
        }
        res=max(res,high-low+1);
        high++;
    }   
    return res; 
}
};