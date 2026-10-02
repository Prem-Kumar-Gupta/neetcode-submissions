class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int p=0;
        int q=1;
        int n=nums.size();
        vector<vector<int>>ans;
        for(int p=0;p<n;p++){
            for(int q=p+1;q<n;q++){
            int k=-nums[p]-nums[q]+0;
            if(find(nums.begin() + q + 1, nums.end(), k) != nums.end()){
                vector<int> temp = {nums[p], nums[q], k};
                sort(temp.begin(), temp.end());
                if (find(ans.begin(), ans.end(), temp) == ans.end()) {
                    ans.push_back(temp);
                }       
            }
            }
        }
        return ans;
    }
};
