class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, bot = m - 1;
        int targetRow = -1;

        while (top <= bot) {
            int row = top + (bot - top) / 2;
            if (target > matrix[row][n - 1]) {
                top = row + 1;
            } else if (target < matrix[row][0]) {
                bot = row - 1;
            } else {
                targetRow = row; 
                break;
            }
        }
        if (targetRow == -1) return false;
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2; 
            if (target > matrix[targetRow][mid]) {
                l = mid + 1;
            } else if (target < matrix[targetRow][mid]) {
                r = mid - 1;
            } else {
                return true;
            }
        }

        return false;
    }
};