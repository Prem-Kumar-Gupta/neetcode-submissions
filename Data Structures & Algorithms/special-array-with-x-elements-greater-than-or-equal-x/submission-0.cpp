class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i =1; i<=nums.size();i++){
            int c=0;
            for(int j = 0 ; j <nums.size();j++){
                if(nums[j]>=i){
                    c++;
                }
            }
            if(c==i){
                return c;

            }
        }
        return -1;
    }
};