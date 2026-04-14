#include <vector>
#include <queue>
#include <set>

using namespace std;

class Solution {
public:
    void bfs(int r, int c, vector<vector<char>>& grid, set<pair<int, int>>& visited) {
        queue<pair<int, int>> q;
        q.push({r, c});
        visited.insert({r, c});

        // Directions for moving Up, Down, Left, Right
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        while (!q.empty()) {
            pair<int, int> curr = q.front();
            q.pop();

            for (auto dir : directions) {
                int nr = curr.first + dir.first;
                int nc = curr.second + dir.second;

                // Check bounds, if it's land ('1'), and if it's not visited
                if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() && 
                    grid[nr][nc] == '1' && visited.find({nr, nc}) == visited.end()) {
                    
                    q.push({nr, nc});
                    visited.insert({nr, nc});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;

        int row = grid.size();
        int cols = grid[0].size();
        int islands = 0;
        set<pair<int, int>> visited;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < cols; j++) {
                // If we find land and it hasn't been visited yet, it's a new island
                if (grid[i][j] == '1' && visited.find({i, j}) == visited.end()) {
                    bfs(i, j, grid, visited);
                    islands += 1;
                }
            }
        }
        return islands;
    }
};