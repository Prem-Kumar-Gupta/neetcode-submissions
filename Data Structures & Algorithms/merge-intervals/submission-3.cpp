class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int>inter;
        vector<int>sortedInter;
        vector<vector<int>>ans;
        if(intervals.size()==1){
            return intervals;
        }
        sort(intervals.begin(), intervals.end());  
        ans.push_back(intervals[0]);
        for(int i =1 ; i < intervals.size();i++){
            if(ans.back()[1]>=intervals[i][0]){
                int newEnd=max(ans.back()[1],intervals[i][1]);
                ans.back()[1]=newEnd;
            }else{
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};
