class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0;
        int end = col-1;

        while(start < row && end >= 0){
            int ele = matrix[start][end];
            if(ele == target){
                return true;
            }
            else if (ele > target){
                end--;
            }
            else{
                start++;
            }
        }
        return false;
    }
};