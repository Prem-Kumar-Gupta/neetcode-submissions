class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> frq;

        for (char c : chars) {
            frq[c]++;
        }

        int sum = 0;

        for (string word : words) {
            unordered_map<char, int> temp = frq;
            bool possible = true;

            for (char ch : word) {
                if (temp[ch] == 0) {
                    possible = false;
                    break;
                }
                temp[ch]--;
            }

            if (possible) {
                sum += word.length();
            }
        }

        return sum;
    }
};