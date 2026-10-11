class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int num=0;
    for(int x:nums){
        int sum=0;
        if(x==0){
            sum=1;
        }
        else{
            while(x>0){
                sum++;
                x/=10;
            }
        }
        if(sum%2==0){
            num++;
        }
    }
    return num;
    }
};