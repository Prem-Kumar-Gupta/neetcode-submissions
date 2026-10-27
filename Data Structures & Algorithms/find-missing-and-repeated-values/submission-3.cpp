class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        vector<int> temp;
        int n =grid.size() ;
        for(int i =0; i <n;i++){
            for(int j = 0 ; j<n;j++){
                temp.push_back(grid[i][j]);
            }
        }
        for(int i =0; i <temp.size();i++){
            int id = abs(temp[i])-1;
            if(temp[id]<0){
                ans.push_back(abs(temp[i]));
            }else{
            temp[id]=-abs(temp[id]);

            }
        }
        for(int i =0; i <temp.size();i++){
            if(temp[i]>0){
                ans.push_back(i+1);
            };
        }
        
        return ans;
    }
};