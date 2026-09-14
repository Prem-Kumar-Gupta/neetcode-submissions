class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> m;

        for (int x : nums) {
            m[x]++;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (m.find(i) != m.end() && m[i] == 2) {
                ans.push_back(i);
                break;
            }
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (m.find(i) == m.end()) {
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};