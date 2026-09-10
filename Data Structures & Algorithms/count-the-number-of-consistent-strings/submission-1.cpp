class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count =0;
        bool frq[26]={};
        for(char ch:allowed){
            frq[ch-'a']=true;
        }
        for(string word:words){
                bool all=false;
            for(char ch:word){
                if(!frq[ch-'a']){
                    all=false;
                    break;
                }else{
                    all=true;
                }
            }
            if(all){
                count++;
            }
        }
        return count;
    }
};