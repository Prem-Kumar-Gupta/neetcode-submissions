class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>rows[9];
        unordered_set<char>col[9];
        unordered_set<char>boxes[9];
        for(int i = 0 ; i < 9 ; i ++){
            for(int j = 0 ; j < 9 ; j ++){
                if(board[i][j]=='.'){
                    continue;
                }
                int box = (i/3)*3+(j/3);
                if(rows[i].contains(board[i][j])){

                    return false;
                }
                rows[i].insert(board[i][j]);

                if(col[j].contains(board[i][j])){

                    return false;
                }
                col[j].insert(board[i][j]);

                if(boxes[box].contains(board[i][j])){

                    return false;
                }
                boxes[box].insert(board[i][j]);            

            }
            
        }
        return true;
    }
};
