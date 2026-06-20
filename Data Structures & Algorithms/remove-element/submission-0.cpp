class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int p=0,q=0;
       for(int i = 0 ;i<nums.size();i++){
        if(nums[q]!=val){
            swap(nums[p],nums[q]);
            p++;
            q++;
        }else{
            q++;
        }
       }
       return p;
    }
};