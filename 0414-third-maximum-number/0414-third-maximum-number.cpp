class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first=LLONG_MIN, second=LLONG_MIN, third=LLONG_MIN;
    for(int x:nums){
        if(x>first){
            first=x;
        }
    }
    for(int x:nums){
        if(x>second && x<first){
            second=x;
        }
    }
    for(int x:nums){
        if(x>third && x<second){
            third=x;
        }
    }
    if(third==LLONG_MIN){
        return first;
    }
    return third;
    }
};