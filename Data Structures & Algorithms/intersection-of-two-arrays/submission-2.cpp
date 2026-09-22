class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1;
        vector<int>ans;
        for(int i = 0 ; i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(auto x : nums2) {
        if(s1.find(x)!=s1.end()){
            ans.push_back(x);
            s1.erase(x);
        }
        }
        return ans;
    }
};