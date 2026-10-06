class Solution {
public:
   bool isIsomorphic(string s, string t) {
    int count1=0,count2=0;
    unordered_map<char,int> mp1;
    unordered_map<char,int> firsts1;
    unordered_map<char,int> mp2;
    unordered_map<char,int> firsts2;
    vector<int> s1,s2;
    for(int i=0;i<s.size();++i){
        if(mp1[s[i]]==0){
            firsts1[s[i]]=count1;
            count1++;
        }
        
        s1.push_back(firsts1[s[i]]);
        
        mp1[s[i]]++;
    }
    for(int i=0;i<t.size();++i){
        if(mp2[t[i]]==0){
            firsts2[t[i]]=count2;
            count2++;
        }
        s2.push_back(firsts2[t[i]]);
        mp2[t[i]]++;
    }
    return s1==s2;
}
};