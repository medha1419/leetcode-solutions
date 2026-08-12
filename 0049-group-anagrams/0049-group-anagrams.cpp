class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
    for(string word: strs){
        string sortedword=word;
        sort(sortedword.begin(),sortedword.end());
        mp[sortedword].push_back(word);
    }
    vector<vector<string>> ans;
    for(auto& pair:mp){
        ans.push_back(pair.second);
    }
    return ans;
    }
};