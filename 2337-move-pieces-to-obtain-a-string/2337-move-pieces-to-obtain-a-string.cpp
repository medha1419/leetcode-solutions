
class Solution {
public:
    bool canChange(string start, string target) {
     int i=0,j=0;
    while(i<start.length() && j<target.length()){
        while(i < start.size() && start[i]=='_')++i;
        while(j < start.size() && target[j]=='_')++j;
        if(i==start.size() || j==target.size()){
            return i==start.size() && j==target.size();
        }
        if(start[i]!=target[j]) return false;
        if(start[i]=='L' && j>i) return false;
        if(start[i]=='R' && j<i) return false;
        ++i;
        ++j;
    }    

    while(i<start.size() && start[i]=='_')++i;
    while(j<start.size() && target[j]=='_')++j;
    return i==start.size() && j==target.length();
}
};
