class NumArray {
public:
    vector<int> prefixx;

    NumArray(vector<int>& nums) {
        prefixx.resize(nums.size() + 1, 0);

        for(int i = 0; i < nums.size(); i++) {
            prefixx[i + 1] = prefixx[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        return prefixx[right + 1] - prefixx[left];
    }
};