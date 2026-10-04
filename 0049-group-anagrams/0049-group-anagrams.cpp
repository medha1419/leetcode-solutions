class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
    vector<string> sorted;
    result.push_back({{strs[0]}});
    string sort_1=strs[0];
    sort(sort_1.begin(),sort_1.end());
    sorted.push_back(sort_1);
    for(int i=1;i<strs.size();++i){
        string temp=strs[i];
        int check=0;
        sort(temp.begin(),temp.end());
        for(int j=0;j<sorted.size();++j){
            if(sorted[j]==temp){
                result[j].push_back({strs[i]});
                check=1;
            }
        }
        if(check==0){
            result.push_back({{strs[i]}});
            sorted.push_back(temp);
        }
    }
    return result;
    }
};