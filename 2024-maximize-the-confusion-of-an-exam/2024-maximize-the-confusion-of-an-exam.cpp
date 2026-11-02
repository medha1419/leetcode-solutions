class Solution {
public:
   int maxConsecutiveAnswers(string answerKey, int k) {
    int trues=0,falses=0,res=0,low=0,high=0;
      while(high<answerKey.size()){
        if(answerKey[high]=='T') trues++;
        else falses++;
        while(trues>k){
            if(answerKey[low]=='T') trues--;
            else falses--;
            low++;
        }
        res=max(res,trues+falses);
        high++;
    } 
    trues=0,falses=0,low=0,high=0;
    while(high<answerKey.size()){
        if(answerKey[high]=='T') trues++;
        else falses++;
        while(falses>k){
            if(answerKey[low]=='T') trues--;
            else falses--;
            low++;
        }
        res=max(res,trues+falses);
        high++;
    } 
    return res;
}
};