class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int l= -1;
        for(int i = 0 ; i<s.length();i++){
            for(int j=i;j<s.length();j++){
                int temp=-1;
                if(s[i]==s[j]){
                    temp = j-(i+1);
                }
                if(temp>l){
                    l=temp;
                    temp=-1;
                }
            }
        }
        return l;
    }
};