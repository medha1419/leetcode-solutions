class Solution {
public:
    void backtrack(int idx, vector<int>& nums, vector<int>&current, vector<vector<int>>& ans){
    if(idx==nums.size()){
        ans.push_back(current);
        return;
    }
    current.push_back(nums[idx]);
    backtrack(idx+1,nums,current,ans);
    current.pop_back();
    backtrack(idx+1,nums,current,ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        backtrack(0,nums, current, ans);
        return ans;
    }
};