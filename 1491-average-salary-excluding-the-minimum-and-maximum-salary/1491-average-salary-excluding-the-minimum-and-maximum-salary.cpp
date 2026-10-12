class Solution {
public:
    double average(vector<int>& salary) {
    int sum=0;
    int maxn=0;
    int minn=INT_MAX;
    for(int x:salary){
        sum+=x;
        maxn=max(maxn,x);
        minn=min(minn,x);
    }
    sum-=maxn;
    sum-=minn;
    double av= (double)sum/(salary.size()-2);
    return av;
    }
};