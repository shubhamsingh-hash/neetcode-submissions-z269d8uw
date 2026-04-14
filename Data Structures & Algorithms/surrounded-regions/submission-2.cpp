class Solution {
public:
    void dfs(int r, int c, int rows, int cols, vector<vector<char>>& board) {
    // 1. Corrected boundary and 'O' check
    if (r < 0 || r >= rows || c < 0 || c >= cols || board[r][c] != 'O') {
        return;
    }

    board[r][c] = 'T'; // Mark as visited/safe

    // 2. Standard 4-directional traversal (no skipping cells)
    dfs(r - 1, c, rows, cols, board);
    dfs(r + 1, c, rows, cols, board);
    dfs(r, c - 1, rows, cols, board);
    dfs(r, c + 1, rows, cols, board);
}

void solve(vector<vector<char>>& board) {
    if (board.empty()) return;
    int rows = board.size();
    int cols = board[0].size();

    // 3. Start DFS from all border 'O's
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Check if the current cell is on the border
            bool isBorder = (i == 0 || i == rows - 1 || j == 0 || j == cols - 1);
            if (isBorder && board[i][j] == 'O') {
                dfs(i, j, rows, cols, board);
            }
        }
    }

    // Final pass: convert 'O' to 'X' (captured) and 'T' back to 'O' (safe)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] == 'O') board[i][j] = 'X';
            else if (board[i][j] == 'T') board[i][j] = 'O';
        }
    }
}
};
