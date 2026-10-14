class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=1;
        int mx=INT_MIN;
        int s=1;
        int n= nums.size();
        for(int i = 0 ; i  < n;i++){
            if(p==0){
                p=1;
            }
            if(s==0){
                s=1;
            }
            p=p*nums[i];
            s=s*nums[n-i-1];
            mx=max(mx,max(s,p));
        }
        return mx;
    }
};