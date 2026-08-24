class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rows(9 , vector<bool>(9));
        vector<vector<bool>> cols(9 , vector<bool>(9));
        vector<vector<bool>> grid(9 , vector<bool>(9));

        for(int i = 0;i < 9;i ++){
            for(int j = 0;j < 9;j ++){
                if(board[i][j]  != '.'){
                    int num = board[i][j] - '1';
                    int boxi = (i / 3) * 3 + (j / 3); // to flatten the matrix into a size 9 array for subgrid checking
                    if(rows[i][num] || cols[j][num] || grid[boxi][num]) return false;
                    rows[i][num] = true; cols[j][num] = true; grid[boxi][num] = true;
                }
            }
        }
        return true;
    }
};