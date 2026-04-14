class Solution {
public:
    void bfs(int i,int j,set<pair<int,int>>&vis,vector<vector<char>>&grid){
        queue<pair<int,int>> q;
        q.push({i,j});
        vis.insert({i,j});
        vector<pair<int,int>> dir={{0,1},{1,0},{-1,0},{0,-1}};
        while(!q.empty()){
            pair<int,int> c;
            c=q.front();
            q.pop();
            for(auto it:dir){
            
            int a=c.first+it.first;
            int b=c.second+it.second;
            if(a>=0&&a<grid.size()&&b>=0&&b<grid[0].size()&&grid[a][b]=='1'&&vis.find({a,b})==vis.end()){
                q.push({a,b});
                vis.insert({a,b});

            }
        }

        }
        

    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int islands=0;
        set<pair<int,int>> vis;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'&&vis.find({i,j})==vis.end()){
                    bfs(i,j,vis,grid);
                    islands+=1;
                }
            }
        }

        return islands;
    }
};
