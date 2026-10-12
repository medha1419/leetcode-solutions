class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxn=0;
    for(string s:sentences){
        stringstream ss(s);
        string word;
        int count=0;
        while(ss>>word){
            count++;
        }
        maxn=max(maxn,count);
    }
    return maxn;
    }
};