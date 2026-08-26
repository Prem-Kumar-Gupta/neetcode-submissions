class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = false;
        bool dec = false;
        for(int i = 0 ; i <nums.size()-1 ; i++){
            if(nums[i+1]>nums[i]){
                inc=true;
            }
            if(nums[i+1]<nums[i]){
                dec=true;
            }
            if(inc && dec){
                return false;
            }
        }
        return true;

    }
};