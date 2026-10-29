class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low=0,high=0;
    int sum=0,ans=0;
    while(high<arr.size()){
        sum+=arr[high];
        if(high-low+1==k){
            if(sum>=k*threshold){
                ans++;
            }
            sum-=arr[low];
            low++;
        }
        high++;
    }
    return ans;
    }
};