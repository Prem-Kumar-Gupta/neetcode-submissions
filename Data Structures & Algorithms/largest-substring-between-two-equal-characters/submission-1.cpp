class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> m;
        int ans = -1;

        for(int i = 0; i < s.length(); i++) {

            if(m.find(s[i]) == m.end()) {
                // First time seeing this character
                m[s[i]] = i;
            }
            else {
                // Character seen before
                ans = max(ans, i - m[s[i]] - 1);
            }
        }

        return ans;
    }
};