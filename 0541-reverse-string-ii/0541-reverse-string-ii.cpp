class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
    while(i<s.size()){
        if(s.size()-i>=k){
            int j=0,t=k-1;
            while(j<t){
                swap(s[i+j],s[i+t]);
                j++;
                t--;
            }
            i+=k;
        }
        else{
            int j=0,t=s.size()-i-1;
            while(j<t){
                swap(s[i+j],s[i+t]);
                j++;
                t--;
            }
            i=s.size();
        }
        int t=0;
        while(i<s.size() && t<k){
            i++;
            t++;
        }

    }
    return s;
    }
};