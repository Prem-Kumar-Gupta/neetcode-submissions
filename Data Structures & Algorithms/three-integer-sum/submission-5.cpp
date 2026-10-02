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
            int q = p+1;
            int r = n-1;
            while(q<r){
                int sum = nums[p]+nums[q]+nums[r];
                if(sum>0){
                    r--;
                }else if(sum<0){
                    q++;
                }else{
                     ans.push_back({nums[p], nums[q], nums[r]});
                    r--;
                    q++;
                    while (q < r && nums[q] == nums[q - 1])
                         q++;

                    while (q < r && nums[r] == nums[r + 1])
                        r--;
                }
            }

        }
        return ans;
    }
};
