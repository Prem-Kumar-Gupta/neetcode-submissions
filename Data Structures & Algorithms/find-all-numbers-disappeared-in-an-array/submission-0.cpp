class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        for(int i =0; i <nums.size();i++){
            int id = abs(nums[i])-1;
            nums[id]=-abs(nums[id]);
        }
        for(int i =0; i <nums.size();i++){
            if(nums[i]==abs(nums[i])){
                ans.push_back(i+1);
            };
        }
        return ans;
    }
};