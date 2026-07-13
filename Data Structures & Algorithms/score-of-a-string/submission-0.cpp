class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0 ;
        for(int i =0;i+1<s.length();i++){
            int num = (int)s[i];
            int diff = abs(num-s[i+1]);
            sum+=diff;
        }
        return sum;
    }
};