class Solution {
public:
    bool check(vector<int>& nums) {
        int smallest=0;
        vector<int>sorted;
        for(int i = 0 ; i <nums.size ();i++){
            if(nums[smallest]>nums[i]){
                smallest = i;
            }
        }
        for(int i = smallest;i<nums.size();i++){
            sorted.push_back(nums[i]);
        }
        for(int i = 0;i<smallest;i++){
            sorted.push_back(nums[i]);
        }
        for(int i = 0 ; i<sorted.size()-1;i++){
            if(sorted[i]>sorted[i+1]){
                return false;
            }
        }
        return true;
        
    }
};