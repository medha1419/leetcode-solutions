class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        for(int i=0;i<accounts.size();++i){
            int curr=0;
            for(int x:accounts[i]){
                curr+=x;
            }
            wealth=max(wealth,curr);
        }
        return wealth;
    }
};