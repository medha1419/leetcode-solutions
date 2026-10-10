class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       vector<int> result;
    for(int i=0;i<index.size();++i){
        if(index[i]>=result.size()){
            result.push_back(nums[i]);
        }
        else{
            result.push_back(result[result.size()-1]);
            for(int j=result.size()-1;j>=index[i]+1;--j){
                result[j]=result[j-1];
            }
            result[index[i]]=nums[i];
        }
    }
    return result;
    }
};