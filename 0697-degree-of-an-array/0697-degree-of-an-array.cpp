class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
         unordered_map<int,int> freq,first,last;
    for(int i=0;i<nums.size();++i){
        int x=nums[i];
        if(freq[x]==0){
            first[x]=i;
        }
        freq[x]++;
        last[x]=i;
    }
    int degree=0;
    for(auto x:freq){
        degree=max(degree,x.second);
    }
    int ans=nums.size();
    for(auto x:freq){
        if(x.second==degree){
            int len=last[x.first]-first[x.first]+1;
            ans=min(ans,len);
        }
    }
    return ans;
    }
};