class Solution {
public:
    int maxDifference(string s) {
        map<char,int> m ;
        for(int i = 0 ; i <s.length();i++){
            m[s[i]]++;
        }
        int odd = 0;
        int even =INT_MAX;
        for(auto it = m.begin();it!=m.end();it++){
            int num = it->second;
            if(num%2==0){
                if(num<even){
                    even=num;
                }
            }else{
                if(num>odd){
                    odd=num;
                }
            }
        }
        return odd-even;
    }
};