class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0 ;
        int q= 1;
        while(q<nums.size()){
            if(nums[q]!=0 && nums[p]==0){
                swap(nums[p],nums[q]);
                p++;
            }
            if(nums[p]!=0){
                p++;
            }
            q++;
        }
    }
};