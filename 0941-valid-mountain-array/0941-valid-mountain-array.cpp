class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
    int i=1,j=0;
    while(i<arr.size()){
        if(arr[i]==arr[i-1]) return false;
        else if(arr[i]>arr[i-1] && i==arr.size()-1) return false;
        else if(arr[i]<arr[i-1]){
            j=i;
            break;
        }
        ++i;
    }
    if(j==1) return false;
    while(j<arr.size()){
        if(arr[j]>=arr[j-1]) return false;
        ++j;
    }
    return true;
    }
};