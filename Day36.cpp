class Solution {
    void printSolution(vector<vector<int>> board, vector<vector<string>> &ans, int n) {
        vector<string> temp;
        for (int i = 0; i < n; i++) {
            string s = "";
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 1) {
                    s.push_back('Q');
                } else {
                    s.push_back('.');
                }
            }
            temp.push_back(s);
        }
        ans.push_back(temp);
    }

    bool issafe(vector<vector<int>> &board, int row, int col, int n) {
        int i, j;
        // Check for a queen in the same row
        for (i = 0; i < col; i++) {
            if (board[row][i])
                return false;
        }

        // Check upper diagonal on the left side
        for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j])
                return false;
        }

        // Check lower diagonal on the left side
        for (i = row, j = col; i < n && j >= 0; i++, j--) {
            if (board[i][j])
                return false;
        }

        return true;
    }

    bool solveNQ(vector<vector<int>> &board, int col, int n, vector<vector<string>> &ans) {
        // All queens are placed successfully
        if (col == n) {
            printSolution(board, ans, n);
            return true;
        }

        bool res = false;
        for (int row = 0; row < n; row++) {
            if (issafe(board, row, col, n)) {
                board[row][col] = 1;
                res = solveNQ(board, col + 1, n, ans) || res;  // Initialize res to false here
                board[row][col] = 0; // Backtrack
            }
        }

        return res;
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        // INitialize all with zero
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<vector<string>> ans;
        solveNQ(board, 0, n, ans); // Start from the first column

        return ans;
    }
};
