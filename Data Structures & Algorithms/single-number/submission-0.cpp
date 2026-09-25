class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorAll=0;
        for(auto x:nums){
            xorAll=xorAll^x;
        }
        return xorAll;
    }
};