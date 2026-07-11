class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     for (int i = 1; i <= nums.size() + 1; i++) {
    if (find(nums.begin(), nums.end(), i) == nums.end()) {
        return i;
    }
}
    }
};
