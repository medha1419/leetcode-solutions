class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<int> first, second;
    unordered_map<char,int> mp;
    unordered_map<string,int> mp2;
    int count = 0, count2 = 0;
    for(int i = 0; i < pattern.size(); ++i){
        if(mp.find(pattern[i]) == mp.end()){
            mp[pattern[i]] = count;
            count++;
        }

        first.push_back(mp[pattern[i]]);
    }
    stringstream ss(s);
    string word;

    while(ss >> word){
        if(mp2.find(word) == mp2.end()){
            mp2[word] = count2;
            count2++;
        }

        second.push_back(mp2[word]);
    }

    return first == second;
    }
};