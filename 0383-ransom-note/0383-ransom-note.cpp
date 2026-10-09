class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpmag,ran;
    for(char c:magazine){
        mpmag[c]++;
    }
    for(char c:ransomNote){
        ran[c]++;
    }
    for(auto x:ran){
        if(x.second>mpmag[x.first]){
            return false;
        }
    }
    return true;
    }
};