class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp=0,tp=0;
    while(sp<s.size()){
        while(tp<t.size() && t[tp]!=s[sp]){
            tp++;
        }
        if(sp!=s.size()-1 && tp==t.size()-1) return false;
        if(tp==t.size() && t[tp]!=s[sp]){
            return false;
        }
        sp++;
        tp++;
    }
    
    return true;
    }
};