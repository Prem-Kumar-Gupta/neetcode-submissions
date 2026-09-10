class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count =0;
        bool all=false;
        for(string word:words){
            for(char ch:word){
                if(allowed.find(ch)!=string::npos){
                    all=true;
                }else{
                    all=false;
                    break;
                }
            }
            if(all){
                count++;
            }
        }
        return count;
    }
};