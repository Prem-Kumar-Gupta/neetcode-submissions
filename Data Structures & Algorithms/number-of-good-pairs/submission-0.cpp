class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int cnt=0;
        for(int i = 0 ; i <nums.size() ; i++){
            m[nums[i]]++;
        }
        for(auto it = m.begin();it!=m.end();it++){
            int frq1=it->second;
            if(frq1>1){
                int frq2=(frq1*(frq1-1))/2;
                cnt+=frq2;
            }
        }
        return cnt;
    }
};