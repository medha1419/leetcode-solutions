class Solution {
public:

int longestConsecutive(vector<int>& nums) {
    if(nums.size()==0){return 0;}
    vector<int> b=nums;
    sort(b.begin(),b.end());
    int longest=1,current=1;
    for(int i=1;i<b.size();++i){
        if(b[i]==b[i-1]){
            continue;
        }
        else if(b[i]==b[i-1]+1){
            current++;
        }
        else{
            current=1;
        }
        longest=max(longest,current);
    }
    return longest;
}
};