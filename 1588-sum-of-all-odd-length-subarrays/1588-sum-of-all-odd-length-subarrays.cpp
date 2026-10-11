class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int i=1;
    int sum=0;
    while(i<=arr.size()){
        int j=0;
        while(j+i<=arr.size()){
            for(int k=j;k<j+i;k++){
                sum+=arr[k];
            }
            j++;
        }
        i+=2;
    } 
    return sum;
    }
};