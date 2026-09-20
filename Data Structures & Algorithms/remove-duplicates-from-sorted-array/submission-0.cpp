class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p = 0 ; 
        int q = 1;
        while(q<nums.size()){
            if(nums[q]==nums[p]){
                nums.erase(nums.begin() + q);
            }else{
                p++;
                q++;
            }
        }
        return nums.size();
    }
};