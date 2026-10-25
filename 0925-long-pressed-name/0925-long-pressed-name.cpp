class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int low=0,high=0;
    int low2=0,high2=0;
    while(high<name.size()){
        while(high<name.size() && name[high]==name[low]){
            high++;
        }
        int lenname=high-low;
        while(high2<typed.size() && typed[high2]==typed[low2] && typed[high2]==name[low]){
            high2++;
        }
        int lentyped=high2-low2;
        if(lentyped<lenname) return false;
        low=high;
        low2=high2;
    }
    return low2==typed.size();
    }
};