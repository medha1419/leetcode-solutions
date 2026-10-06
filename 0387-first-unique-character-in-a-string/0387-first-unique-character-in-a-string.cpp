class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> vec(26,0);
    for(char c:s){
        vec[c-97]++;
    }
    for(int i=0;i<s.size();++i){
        if(vec[s[i]-97]==1){
            return i;
        }
    }
    return -1;
    }
};