class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> maxvec;
        int curr=-1;
        maxvec.push_back(curr);
        for(int i=arr.size()-2;i>=0;--i){
            curr=max(curr,arr[i+1]);
            maxvec.push_back(curr);
        }
        int low=0,high=arr.size()-1;
        while(low<high){
            swap(maxvec[low],maxvec[high]);
            low++;
            high--;
        }
        return maxvec;
    }
};