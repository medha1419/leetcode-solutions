class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    int low = 0, high = 0;
    int anss = 0;

    while(high < nums.size()) {
        while(nums[high] - nums[low] > 2*k) {
            low++;
        }

        anss = max(anss, high-low+1);
        high++;
    }

    return anss;
}
};