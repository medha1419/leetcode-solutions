class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int ans = INT_MAX;

        for (int low = 0; low + k <= nums.size(); low++) {
            int diff = nums[low + k - 1] - nums[low];
            ans = min(ans, diff);
        }

        return ans;
    }
};