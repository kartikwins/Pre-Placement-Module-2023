class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int n, int m, vector<vector<bool>> &vis) {
        if(vis[i][j]) return;
        vis[i][j]=true;
        if(i-1>=0 && grid[i-1][j]=='1') dfs(grid, i-1, j, n, m, vis);
        if(i+1<n && grid[i+1][j]=='1') dfs(grid, i+1, j, n, m, vis);
        if(j-1>=0 && grid[i][j-1]=='1') dfs(grid, i, j-1, n, m, vis);
        if(j+1<m && grid[i][j+1]=='1') dfs(grid, i, j+1, n, m, vis);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans = 0;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]=='1' && !vis[i][j]) {
                    ans++;
                    dfs(grid, i, j, n, m, vis);
                }
            }
        }
        return ans;
    }
};