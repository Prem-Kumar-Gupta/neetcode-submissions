class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        vector<int>p(n,0);
        p[0]=nums[0];
        for(int i =1;i<n;i++){
            p[i]=p[i-1]+nums[i];
        }
        unordered_map<int,int>m;
        for(auto x:p){
            if(x==k){
                c++;
            }
            int val=x-k;
            if(m.find(val)!=m.end()){
                c+=m[val];
            }
            m[x]++;
        }
        return c;

    }
};