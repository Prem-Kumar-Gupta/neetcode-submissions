class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int> ans;

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int range = n / 3;

        int count = 1;
        for (int i = 1; i < n; i++) {

            if (nums[i] == nums[i - 1]) {
                count++;
            } else {

                if (count > range)
                    ans.push_back(nums[i - 1]);

                count = 1;
            }
        }
        if (count > range)
            ans.push_back(nums[n - 1]);

        return ans;
    }
};