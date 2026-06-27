class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l =0;
        int r=(nums.size())-1;
        int p = 0;
        while (p<=r){
            if(nums[p]==0){
                swap(nums[l],nums[p]);
                l++;
                p++;

            }
            else if(nums[p]==2){
                swap(nums[r],nums[p]);
                r--;
            }
            else{
                p++;
            }
        }
    }
};