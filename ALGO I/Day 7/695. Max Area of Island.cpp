class Solution {
public:
    int area(vector<vector<int>>& grid, int i, int j)
    {
        if( i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==-1 ||                  grid[i][j]==0) 
            return 0;
        grid[i][j]=-1;
        
        return ( 1+area(grid, i+1, j) + 
                area(grid, i, j+1) + 
                area(grid, i-1, j) + 
                area(grid, i, j-1));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int ans = 0;
        for(int i=0; i<r; i++)
        {
            for(int j = 0; j<c; j++)
            {
                if(grid[i][j]==1)
                {
                    ans = max(ans, area(grid, i, j));
                }
            }
        }
        return ans;
    }
    
};