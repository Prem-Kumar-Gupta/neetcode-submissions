class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>m;
        string str= "balloon";
        for(int i = 0 ; i <text.length();i++){
            if(str.contains(text[i])){
                m[text[i]]++;
            }
        }
        return min({ m['b'],m['a'],m['l'] / 2,m['o'] / 2,m['n']});

        
        ;
    }
};