class Solution {
public:
    int dc[4] = {0, 0, 1, -1};
    int dr[4] = {1, -1, 0, 0};
    int bfs(vector<vector<int>>& grid , int r , int c){
        queue<pair<int , int>> q;
        grid[r][c] = 0;
        q.push({r,c});
        int res = 1;

        while(!q.empty()){
            auto top = q.front(); q.pop();
            int r = top.first;int c = top.second;
            for(int i =0;i < 4;i ++){
                int newrow = r + dr[i];
                int newcol = c + dc[i];
                if(newcol >= 0 && newrow >= 0 && newcol < grid[0].size()&& newrow < grid.size()&&grid[newrow][newcol] == 1){
                    q.push({newrow , newcol});
                    grid[newrow][newcol] = 0;
                    res++;
                }
            }
        }
        return res;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0;i < m;i ++){
            for(int j = 0;j < n;j ++){
                if(grid[i][j] == 1) ans = max(ans , bfs(grid , i, j));
            }
        }
        return ans;
        
    }
};
