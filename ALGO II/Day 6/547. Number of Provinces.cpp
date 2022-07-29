class Solution {
public:
    unordered_map<int,int> visited;
    void dfs(vector<vector<int>>& isConnected, int si)
    {
        visited[si]++;
        
        for(int i=0;i<isConnected[si].size();i++)
        {
            if(isConnected[si][i] == 1 && visited.find(i) == visited.end())
            {
                dfs(isConnected,i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        int n = isConnected.size();
        for(int i=0;i<n;i++)
        {
            if(visited.find(i) == visited.end())
            {
                dfs(isConnected,i);
                ans++;
            }
        }
        return ans;
    }
};