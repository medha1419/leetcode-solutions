class Solution {
public:
    bool isVowel(char c){
    switch (c){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U': return true;
        default: return false;
    }
}
int maxVowels(string s, int k) {
    int maxn=0;
    int low=0,high=0;
    int sum=0;
    while(high<s.size()){
        if(isVowel(s[high])){
            sum++;
        }
        if(high-low+1==k){
            maxn=max(maxn,sum);
            if(isVowel(s[low])){
                sum--;
            }
            low++;
        }
        high++;
    }
    return maxn;
}
};