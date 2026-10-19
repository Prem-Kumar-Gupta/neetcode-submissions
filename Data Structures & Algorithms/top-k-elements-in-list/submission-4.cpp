class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int ,int> m1;
        for(int i =0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        vector<pair<int ,int> >v1;
        for(auto it =m1.begin();it!=m1.end();it++){
            v1.push_back({it->second,it->first});
        }
        sort(v1.begin(), v1.end(), greater<pair<int ,int>>());

        vector<int> ans;
        
        for(int i=0;i<k;i++){
        
            ans.push_back(v1[i].second);
        }
        return ans;
    } 
};
