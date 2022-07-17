class Solution {
public:
    void dfs(int i,int j,int initialColor,int newColor,vector<vector<int>> &image){
        if(i<0 || j<0 || i>=(image.size()) || j>=(image[0].size()) || image[i][j] != initialColor) return;
        image[i][j] = newColor;
        dfs(i-1,j,initialColor,newColor,image);
        dfs(i+1,j,initialColor,newColor,image);
        dfs(i,j-1,initialColor,newColor,image);
        dfs(i,j+1,initialColor,newColor,image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] != newColor) dfs(sr,sc,image[sr][sc],newColor,image);
        return image;
    }
};
