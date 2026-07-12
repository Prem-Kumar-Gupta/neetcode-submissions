class Solution {
public:
    bool isSubsequence(string s, string t) {
     int n =s.length();
     int m =t.length();

     map<char,vector<int>>pm;
     for(int i = 0 ; i<m;i++){
        pm[t[i]].push_back(i);
     }

        int prev = -1;
     for (int i = 0 ; i <n ;i++){
        char ch = s[i];
        if(pm.find(ch)==pm.end())
        return false;

        vector <int >id =pm[ch];
        auto it = upper_bound(id.begin(),id.end(),prev);
        if(it==id.end())
        return false;
        prev=*it;

     }
     return true;
    }
};
