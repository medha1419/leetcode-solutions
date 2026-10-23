class Solution {
public:
bool isVowel(char c){
    switch(c){
        case 'a' : case 'e': case 'i': case 'o': case 'u':case 'A': case 'E': case 'I': case 'O': case 'U': return true;
        default: return false;
    }
}

    string reverseVowels(string s) {
        int low=0,high=s.size()-1;
    while(low<high){
        while(low<high && !isVowel(s[low])){
            low++;
        }
        while(low<high && !isVowel(s[high])){
            high--;
        }
        swap(s[low],s[high]);
        low++;
        high--;
    } 
    return s;
    }
};