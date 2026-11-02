class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0,high=0;
    unordered_map<int,int> mp;
    int sum=0,res=0;
    while(high<fruits.size()){
        mp[fruits[high]]++;
        sum++;
        while(mp.size()>2){
            mp[fruits[low]]--;
            if(mp[fruits[low]]==0) mp.erase(fruits[low]);
            sum--;
            low++;
        }
        res=max(res,sum);
        high++;
    }
    return res;
    }
};