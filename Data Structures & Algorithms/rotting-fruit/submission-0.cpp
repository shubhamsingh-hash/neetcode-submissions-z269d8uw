class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        queue<pair<int,int>> q;

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid[i][j] == 2)
                    q.push({i, j});

        vector<pair<int,int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        int minutes = 0;

        while(!q.empty()){
            int size = q.size();  // number of cells in current level
            bool spread = false;
            
            for(int i = 0; i < size; i++){  // process exactly one level
                auto [r, c] = q.front();
                q.pop();
                for(auto [dr, dc] : dirs){
                    int nr = r + dr, nc = c + dc;
                    if(nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 1){
                        grid[nr][nc] = 2;
                        q.push({nr, nc});
                        spread = true;
                    }
                }
            }
            if(spread) minutes++;  // only count if something actually rotted
        }

        // check if any fresh fruit remains
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid[i][j] == 1) return -1;

        return minutes;
    }
};