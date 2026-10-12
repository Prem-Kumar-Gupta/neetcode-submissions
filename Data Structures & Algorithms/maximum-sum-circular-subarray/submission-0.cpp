class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum=INT_MIN;
        int n =nums.size();
        int j=0;
        for(int i = 0 ; i <nums.size();i++){
                int sum=0;
                j=i;
            for (int count = 0; count < n; count++) {
                sum+=nums[j];
                maxSum=max(maxSum,sum);
                j=(j+1)%n;
            }
            }
        return maxSum;
    }
};