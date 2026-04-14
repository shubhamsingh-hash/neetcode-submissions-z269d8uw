class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    q.push({i,j});

                }
            }
        }

        vector<pair<int,int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty()){
            pair<int,int> a;
            a=q.front();
            q.pop();
            for(auto it:dirs){
                int b=a.first+it.first;
                int c=a.second+it.second;
                 if(b >= 0 && b < grid.size() && c >= 0 && c < grid[0].size() && grid[b][c] == INT_MAX){
                    grid[b][c] = grid[a.first][a.second] + 1;
                    q.push({b, c});
                }
            }
        }
        
    }
};
