class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxn=0;
    vector<bool> result;
    for(int x:candies){
        maxn=max(maxn,x);
    } 
    for(int x:candies){
        if(x+extraCandies>=maxn){
            result.push_back(true);
        }
        else{
            result.push_back(false);
        }
    }
    return result;
    }
};