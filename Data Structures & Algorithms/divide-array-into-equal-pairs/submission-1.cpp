class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int , int>m;
        bool res=false;
        for(int i = 0 ; i <nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it = m.begin() ; it!=m.end();it++){
            if(it->second%2==0){
                res=true;;
            }else{
                return false;
            }
        }
        return res;
    }
};