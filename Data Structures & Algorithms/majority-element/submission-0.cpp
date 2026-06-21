class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i = 0 ; i < nums.size();i++){
            m[nums[i]]++;
        }
        int target = 0 ;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>target){
                target = it->second;
            }
        }
        for (auto it : m) {
        if (it.second == target) {
        return it.first;
    }
}
    }
};