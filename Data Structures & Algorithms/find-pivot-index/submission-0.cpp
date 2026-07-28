class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0;
        int t = 0 ; 
        int r=0;
        for(int i =0 ; i < nums.size();i++){
            t+=nums[i];
        }
        for(int i =0 ; i < nums.size();i++){
            r=t-l-nums[i];
            if(r==l){
                return i;
            }
            l+=nums[i];
        }
        return -1;

    }
};