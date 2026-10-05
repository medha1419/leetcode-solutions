class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long,long long> mp;
    long long n=nums.size();
    long long pairs=n*(n-1)/2;
    long long good=0;
    for(long long i=0;i<n;++i){
        long long x=nums[i]-i;
        good+=mp[x];
        mp[x]++;
    }
    return pairs-good;
    }
};