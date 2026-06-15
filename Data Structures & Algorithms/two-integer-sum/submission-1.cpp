class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m1;
        for(int i = 0;i<nums.size();i++){
            int numWant=target-nums[i];
            if(m1.contains(numWant)){
                return {m1[numWant],i};
            }
            m1[nums[i]]=i;
        }
    }
};
