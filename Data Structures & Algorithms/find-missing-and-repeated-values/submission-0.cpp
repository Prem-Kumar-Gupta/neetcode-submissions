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
        sort(temp.begin(),temp.end());
        for(int i = 1 ; i <temp.size();i++){
            if(temp[i]==temp[i-1]){
                ans.push_back(temp[i]);
            }
        }
        if (temp[0] != 1){
            ans.push_back(1);
        }
        for(int i = 1 ; i <temp.size();i++){
            if(temp[i]!=temp[i-1]){
                if(temp[i-1]+1 != temp[i]){
                ans.push_back(temp[i-1]+1);
                }
            }
        }
        if (temp.back() != n * n){
            ans.push_back(n * n);
        }
        return ans;
    }
};