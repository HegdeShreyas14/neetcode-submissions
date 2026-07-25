class Solution {
public:
    void bfs(vector<vector<char>>& grid , int r , int c){
        queue<pair<int, int>> q;
        grid[r][c] = '0';
        q.push({r,c});
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            int dr[] = {-1 , 0 , 1, 0};
            int dc[] = { 0 ,-1 ,0 ,1};

            for(int i = 0 ; i < 4 ; i ++){
                int nr = r + dr[i];
                int nc = c + dc[i];

                if(nr < grid.size() && nc < grid[0].size() && nr >= 0 && nc >= 0 && grid[nr][nc] == '1'){
                    q.push({nr,nc});
                    grid[nr][nc] = '0';
                }
            }
        }
    }
    

    int numIslands(vector<vector<char>>& grid) {
        int ans  = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0 ; i < m ;i ++){
            for(int j =0 ;j < n; j ++){
                if(grid[i][j] == '1'){
                    bfs(grid,i,j);
                    ans ++;
                }
            }
        }
        return ans;        
    }
};
