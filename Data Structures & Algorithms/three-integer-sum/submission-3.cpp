class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
         sort(nums.begin(), nums.end());
        for(int p=0;p<n;p++){
            if(p>0 && nums[p]==nums[p-1]){
            continue;
            }
            for(int q=p+1;q<n;q++){
                if(q>p+1 && nums[q]==nums[q-1]){
            continue;
            }
                int k=-nums[p]-nums[q]+0;
                if(find(nums.begin() + q + 1, nums.end(), k) != nums.end()){
                    vector<int> temp = {nums[p], nums[q], k};
                    ans.push_back(temp);   
                }
            }
        }
        return ans;
    }
};
