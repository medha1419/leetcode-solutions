class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
    string word;
    string result;
    while(ss>>word){
        int low=0,high=word.size()-1;
            while(low<high){
                swap(word[low],word[high]);
                low++;
                high--;
            }
            result+=word;
            result+=" ";
    }
    result.pop_back();
    return result;
    }
};