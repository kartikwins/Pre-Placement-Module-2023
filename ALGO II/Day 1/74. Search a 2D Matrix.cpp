class Solution {
public:
    // This is a implementation which calculates r,c location in matrix
    //  from given linear location.
    int GetElement(int x, vector<vector<int>>& matrix){
        int columnCount = matrix.at(0).size();
        
        int rowIndex = x / columnCount;
        int columnIndex = x % columnCount;
        
        return matrix[rowIndex][columnIndex];
    }
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // A very standard implementation of Binary Search.
        int s = 0, e = (matrix.size() * matrix.at(0).size()) - 1;
        int mid = s + (e - s) / 2;
        
        while(s<=e){
            if(GetElement(mid, matrix) == target){
                return true;
            }else if(GetElement(mid, matrix) > target){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
                
            mid = s + (e - s) / 2;
        }
        
        return false;
        
    }
};