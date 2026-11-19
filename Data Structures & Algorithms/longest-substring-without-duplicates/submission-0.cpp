class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int left = 0;
int maxC = 0;
unordered_map<char, int> m;

for (int right = 0; right < s.size(); right++) {

    m[s[right]]++;

    while (m[s[right]] > 1) {
        m[s[left]]--;
        left++;
    }

    maxC = max(maxC, right - left + 1);
}

return maxC;
    }
};