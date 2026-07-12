class Solution {
public:
    bool isSubsequence(string s, string t) {
     int n = s.length();
     if(s.empty()){
        return true;
     }
     int q=0;
     for(int i =0;i<t.length();i++){
        if(t[i]==s[q]){
            q++;
            if(q>n-1){
                return true;
            }
        }
     }
     return false;   
    }
};
