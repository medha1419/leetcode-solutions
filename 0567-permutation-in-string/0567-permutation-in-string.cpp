class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int s=s1.size(),t=s2.size();
    unordered_map<char,int> mp1,mp2;
    for(char c:s1){
        mp1[c]++;
    }
    int low=0,high=0;
    while(high<t){
        mp2[s2[high]]++;
        if(high-low+1==s){
            if(mp1==mp2) return true;
            mp2[s2[low]]--;
            if(mp2[s2[low]]==0)mp2.erase(s2[low]);
            low++;
        }
        high++;
    }
    return false;
}
};