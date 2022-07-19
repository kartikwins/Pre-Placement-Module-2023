class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0) dp[i][j]=0;
                else{
                    int up,left;
                    up=(i==0)? 10001:dp[i-1][j]+1;
                    left=(j==0)?10001:dp[i][j-1]+1;
                    dp[i][j]=min(up,left);
                }
            }
        }
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(mat[i][j]==0) dp[i][j]=0;
                else{
                    int bottom,right;
                    bottom=(i==m-1)? 10001:dp[i+1][j]+1;
                    right=(j==n-1)?10001:dp[i][j+1]+1;
                    dp[i][j]=min(dp[i][j],min(bottom,right));
                }
            }
        }
        return dp;
    }
};