class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>temp;
        vector<vector<int>>ans;
        int n = intervals.size();
        bool inserted=false;
        if(n<1){
            return {newInterval};
        }
        for(int i =0 ;i <n;i++){
            if(intervals[i][0]>=newInterval[0]){
                temp.push_back(newInterval);
                inserted=true;
                while(i<n){
                    temp.push_back(intervals[i]);
                    i++;
                }
                break;
            }else{
                temp.push_back(intervals[i]);
            }
        }
        if(!inserted){
           temp.push_back(newInterval); 
        }
                ans.push_back(temp[0]);
          for(int i =1 ; i < temp.size();i++){
            if(ans.back()[1]>=temp[i][0]){
                int newEnd=max(ans.back()[1],temp[i][1]);
                ans.back()[1]=newEnd;
            }else{
                ans.push_back(temp[i]);
            }
        }
        return ans;

    }
};
