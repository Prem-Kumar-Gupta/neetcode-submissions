class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;

        map<char,int> map1;
        map<char,int> map2;

        for(int i = 0; i < s.length(); i++)
            map1[s[i]]++;

        for(int i = 0; i < t.length(); i++)
            map2[t[i]]++;

        for(int i = 0; i < s.length(); i++) {

            if(!map1.contains(t[i]))
                return false;

            if(map1[t[i]] != map2[t[i]])
                return false;
        }

        return true;
    }
};