class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.length()>s.length()){
        return {};
    }
    vector<int> result;
    int low=0,high=0;
    unordered_map<char,int> mp;
    for(char c:p){
        mp[c]++;
    }
    unordered_map<char,int> mp2;
    while(high<s.length()){
        while(high-low<p.length()){
            mp2[s[high]]++;
            high++;
        }
        int check=0;
        if(mp.size()==mp2.size()){
            for(auto& x:mp){
                if(x.second!=mp2[x.first]){
                    check=1;
                    break;
                }
            }
        }
        else{
            check=1;
        }
        if(check==0){
            result.push_back(low);
        }
        
            mp2[s[low]]--;
            if(mp2[s[low]] == 0){
                mp2.erase(s[low]);
            }
            low++;
    }
    return result;
    }
};