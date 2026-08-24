class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int p=0,q=1;
        int n = nums.size();
        while(q<n){
            if(nums[p]%2==0 && nums[q]%2!=0 ){      
                p++;
                q++;
            }else if(nums[p]%2!=0 && nums[q]%2==0 ){
                p++;
                q++;
            }else{
                return false;
            }
        }
        return true;

    }
};