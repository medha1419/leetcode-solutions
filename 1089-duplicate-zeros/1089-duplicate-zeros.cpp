class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
    int z=0;
    for(int x:arr){
        if(x==0){
            z++;
        }
    }
    int i=n-1;
    int j=n+z-1;
    while(i>=0){
        if(j<n){
            arr[j]=arr[i];
        }
        if(arr[i]==0){
            j--;
            if(j<n){
                arr[j]=0;
            }
            
        }
        i--;
        j--;
    }
    }
};