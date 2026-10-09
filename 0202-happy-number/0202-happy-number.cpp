class Solution {
public:
    int sumsquares(int n){
    int sum=0;
    int digit;
    while(n>0){
        digit=n%10;
        sum=sum+ digit*digit;
        n=n/10;
    }
    return sum;
}

bool isHappy(int n) {
       unordered_set<int> seen;
       while(n!=1){
        if(seen.count(n)){
            return false;
        }
        seen.insert(n);
        n=sumsquares(n);
       } 
       return true;
}
};