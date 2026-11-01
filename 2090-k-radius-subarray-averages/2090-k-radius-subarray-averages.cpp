class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
    int n=nums.size();
     if (n < 2 * k + 1) {
        return vector<int>(n, -1);
    }
    vector<int> result;
    long long int sum=0;
    for(int i=0;i<k;++i){
        result.push_back(-1);
        sum+=nums[i];
    }
    int low=0;
    int high=k;
    while(high<n){
        sum+=nums[high];
        if(high-low+1==(2*k)+1){
            int av=sum/((2*k)+1);
            result.push_back(av);
            sum-=nums[low];
            low++;
        }
        high++;
    }
    while(result.size()<n){
        result.push_back(-1);
    }
    return result;
}
};