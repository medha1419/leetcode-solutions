class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {int res=0;
        sort(intervals.begin(), intervals.end(), [](vector<int>& x, vector<int>& y) {
    return x[1] < y[1];
    });
    int prev_end = intervals[0][1];
    for(int i=1;i<intervals.size();++i){
        if(intervals[i][0]<prev_end){
            res++;
        }
        else{
            prev_end=intervals[i][1];
        }
    }
    return res;
    }
};