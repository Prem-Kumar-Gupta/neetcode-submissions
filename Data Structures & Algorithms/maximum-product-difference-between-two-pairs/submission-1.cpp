class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int small1 = INT_MAX;
        int small2 = INT_MAX;

        int large1 = INT_MIN;
        int large2 = INT_MIN;

        for(int n : nums) {
            // Find 2 smallest
            if(n < small1) {
                small2 = small1;
                small1 = n;
            }
            else if(n < small2) {
                small2 = n;
            }

            // Find 2 largest
            if(n > large1) {
                large2 = large1;
                large1 = n;
            }
            else if(n > large2) {
                large2 = n;
            }
        }

        return (large1 * large2) - (small1 * small2);
    }
};