class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        int c =  0; 
        bool hasOdd= false; ;
        for(int i = 0 ; i < s.length() ; i++){
            m[s[i]]++;
        }
        for(auto it = m.begin() ; it!=m.end() ; it++){
            int f = it->second;
            if(f%2!=0){
                c+=f-1;
                hasOdd=true;
            }else{
                c+=f;
            }
        }
        if(hasOdd){
        c++;
        }
        return c;
    }
};