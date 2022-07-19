class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> rotten;
        int i,j,a,fresh=0,ans=0,m=grid.size(),n=grid[0].size();
        bool change = false;
        for(i=0;i<m;++i)
            for(j=0;j<n;++j){
                if(grid[i][j]==1) ++fresh;
                else if(grid[i][j]==2) rotten.push({i,j});
            }
        while(!rotten.empty()){
            a = rotten.size();
            while(a){
                i = rotten.front().first;
                j = rotten.front().second;
                rotten.pop();
                if(i-1>=0 and grid[i-1][j]==1)
                    rotten.push({i-1,j}), grid[i-1][j]=2, --fresh, change=true;
                if(j-1>=0 and grid[i][j-1]==1)
                    rotten.push({i,j-1}), grid[i][j-1]=2, --fresh, change=true;
                if(i+1<m and grid[i+1][j]==1)
                    rotten.push({i+1,j}), grid[i+1][j]=2, --fresh, change=true;
                if(j+1<n and grid[i][j+1]==1)
                    rotten.push({i,j+1}), grid[i][j+1]=2, --fresh, change=true;
                --a;
            }
            if(change) ++ans;
            change = false;
        }
        if(fresh) return -1;
        return ans;
    }
};
