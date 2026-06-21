class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;
        int num=nums[0];
        int n =nums.size()/2;
        for(int i = 0 ; i <nums.size();i++){
            if(num==nums[i]){
                count++;
            }else{
                if(count>n){
                    return num;
                }else{
                    num=nums[i];
                    count=1;
                }
            }
        }
        return num;
    }
};