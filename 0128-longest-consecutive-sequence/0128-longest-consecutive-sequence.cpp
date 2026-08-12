class Solution {
public:

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> mp;
    for(int i: nums){
        mp.insert(i);
    }
    int longest=0;
    for(int i:mp){
        if(!mp.count(i-1)){
            int current=i;
            int curstreak=1;
            while(mp.count(current+1)){
                current++;
                curstreak++;
            }
            longest=max(longest,curstreak);
        }
    }
    return longest;
}
};