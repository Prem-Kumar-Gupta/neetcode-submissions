class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum=INT_MIN;
        int minSum=INT_MAX;
        int n =nums.size();
        int sum1=0;
        int sum2=0;
        int total=0;
        int ans=0;
            for (int i = 0; i < n; i++) {
                total+=nums[i];
                sum1+=nums[i];
                sum2+=nums[i];
                minSum=min(minSum,sum2);
                maxSum=max(maxSum,sum1);
                if(sum1<0){
                    sum1=0;
                }
                if(sum2>0){
                    sum2=0;
                }
            }
            if(maxSum>0){
            ans=max(maxSum,(total-minSum));
            return ans;
            }
            return maxSum;
    }
};