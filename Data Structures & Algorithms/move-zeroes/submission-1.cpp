class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p =0 ; 
        int q= 0 ;
        while(q<nums.size()){
            if(nums[q]!=0){
                swap(nums[p],nums[q]);
                p++;
            }
            q++;
        }
    }
};