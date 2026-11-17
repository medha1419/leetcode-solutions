class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    int loww = 0, high = 0;
    int ans = 0;

    while(high < nums.size()) {
        while(nums[high] - nums[loww] > 2*k) {
            loww++;
        }

        ans = max(ans, high-loww+1);
        high++;
    }

    return ans;
}
};