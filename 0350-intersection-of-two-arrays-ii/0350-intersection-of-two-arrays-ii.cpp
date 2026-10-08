class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
    unordered_map<int,int> mp1,mp2;
    for(int x:nums1){
        mp1[x]++;
    }    
    for(int x:nums2){
        mp2[x]++;
    } 
    for(auto x:mp1){
        if(mp2.find(x.first)!=mp2.end()){
            for(int i=0;i<min(x.second,mp2[x.first]);++i){
                result.push_back(x.first);
            }
        }
    }
    return result;
    }
};