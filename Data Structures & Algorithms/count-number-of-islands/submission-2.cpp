class Solution {
public:
    void bfs(int r,int c,vector<vector<char>>& grid, set<pair<int, int>>& visited){
        queue<pair<int,int>>q;
        q.push({r,c});
        visited.insert({r,c});
        vector<pair<int,int>> directions={{0,1},{1,0},{-1,0},{0,-1}};
        while(!q.empty()){
            pair<int,int> curr=q.front();
            q.pop();
            for(auto dir:directions){
                int a=curr.first+dir.first;
                int b=curr.second+dir.second;
                if(a>=0&&a<grid.size()&&b>=0&&b<grid[0].size()&&grid[a][b]=='1'&&visited.find({a,b})==visited.end()){
                    q.push({a,b});
                    visited.insert({a,b});
                }
            }
        }

    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int rows=grid.size();
        int cols=grid[0].size();
        int islands=0;
        set<pair<int,int>> visited;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'&& visited.find({i,j})==visited.end()){
                    bfs(i, j, grid, visited);
                    islands+=1;
                }
            }
        }
        return islands;
    }
};