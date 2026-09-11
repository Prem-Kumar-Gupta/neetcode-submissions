class Solution {
public:
    string largestGoodInteger(string num) {
        char grt = 0;

        for (int i = 2; i < num.length(); i++) {
            if (num[i] == num[i - 1] && num[i] == num[i - 2]) {
                if (num[i] > grt) {
                    grt = num[i];
                }
            }
        }

        if (grt == 0) {
            return "";
        }

        string ans(3, grt);
        return ans;
    }
};