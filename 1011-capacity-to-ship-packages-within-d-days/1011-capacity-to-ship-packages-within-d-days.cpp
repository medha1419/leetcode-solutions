class Solution {
public:
    bool canfit(vector<int>& weights, int days, int weight){
    int check=0;
    int i=0;
    while(i<weights.size()){
        int sum=0;
        if(weights[i]>weight){
            return false;
        }
        while(i<weights.size() && sum+weights[i]<=weight){
            sum+=weights[i];
            ++i;
        }
        check++;
    }
    return check<=days;
}

int shipWithinDays(vector<int>& weights, int days) {
    int sum=0;
    for(int i=0;i<weights.size();++i){
        sum+=weights[i];
    }
    int low=1,high=sum,ans=sum;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(canfit(weights,days,mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
};