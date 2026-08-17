class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
    int minops=INT_MAX;
    for(int k=0;k<n;++k){
        int currentops=k;
        int left=0,right=n-1;
        while(left<right){
            char c1=s[(left+k)%n];
            char c2=s[(right+k)%n];
            int cost_c1_to_c2=(c2-c1+26)%26;
            int cost_c2_to_c1=(c1-c2+26)%26;
            currentops+=min(cost_c1_to_c2,cost_c2_to_c1);
            left++;
            right--;
        }
        minops=min(minops,currentops);
    }
    return minops;
    }
};