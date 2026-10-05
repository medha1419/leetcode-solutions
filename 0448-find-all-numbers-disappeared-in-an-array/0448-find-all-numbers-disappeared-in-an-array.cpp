class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
    vector<int> results;
    for(auto& x:nums){
        mp[x]++;
    }
    for(int i=1;i<=nums.size();++i){
        if(mp[i]==0){
            results.push_back(i);
        }
    }      
    return results; 
    }
};