class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        int c = 0;
        if (s == 1) {
            if (flowerbed[0] == 0) c++;
            return c >= n;
        }

        for (int i = 0; i < s; i++) {
            bool left = (i == 0) || flowerbed[i - 1] == 0;
            bool right = (i == s - 1) || flowerbed[i + 1] == 0;

            if (flowerbed[i] == 0 && left && right) {
                flowerbed[i] = 1;
                    c++;
                }
        }

        return c >= n;
    }
};