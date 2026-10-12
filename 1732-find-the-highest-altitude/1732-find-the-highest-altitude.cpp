class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alts;
    int sum=0;
    alts.push_back(sum);
    for(int x:gain){
        alts.push_back(sum+x);
        sum+=x;
    }
    int maxn=0;
    for(int x:alts){
        maxn=max(maxn,x);
    }
    return maxn;
    }
};