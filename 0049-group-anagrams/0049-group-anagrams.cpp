class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> final;
    vector<unordered_map<char,int>> vec;
    
    for(string s:strs){
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int check=0;
        for(int i=0;i<vec.size();++i){
            int check2=0;
            if(vec[i].size() != mp.size())
                continue;
            for(auto& y:vec[i]){
                if(mp.find(y.first) == mp.end() || y.second != mp.at(y.first)){
                    check2 = 1;
                    break;
                }
            }
            if(check2==0){
                final[i].push_back(s);
                check=1;
                break;
            }
        }
        if(check==0){
            final.push_back({s});
            vec.push_back(mp);
        }
    }
    return final;
    }
};