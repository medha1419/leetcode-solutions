class Solution {
public:
   bool isIsomorphic(string s, string t) {
    vector<vector<int>> v1,v2;
    unordered_map<char,int> mp1,mp2;
    int count1=0,count2=0;
    for(int i=0;i<s.size();++i){
        if(mp1.find(s[i])==mp1.end()){
            mp1[s[i]]=count1;
            v1.push_back({});
            count1++;
        }
        v1[mp1[s[i]]].push_back(i);
    }
    for(int i = 0; i < t.size(); ++i){

        if(mp2.find(t[i]) == mp2.end()){
            mp2[t[i]] = count2;
            v2.push_back({});
            count2++;
        }

        v2[mp2[t[i]]].push_back(i);
    }
    return v1==v2;
}
};