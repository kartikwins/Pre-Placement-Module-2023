class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> us;
        // row
        for(int r = 0; r < 9; ++r)
        {
            for(int c = 0; c < 9; ++c)
            {
                if(us.find(board[r][c]) != us.end()) return false;
                if(board[r][c] != '.') us.insert(board[r][c]);
            }
            us.clear();
        }
        // column
        for(int c = 0; c < 9; ++c)
        {
            for(int r = 0; r < 9; ++r)
            {
                if(us.find(board[r][c]) != us.end()) return false;
                if(board[r][c] != '.') us.insert(board[r][c]);
            }
            us.clear();
        }
        
        // 3x3
        // 0-2 rows & 1-3 sub-boxes
        for(int c = 0; c < 9; ++c)
        {
            if(c%3 == 0) us.clear();
            for(int r = 0; r < 3; ++r)
            {
                if(us.find(board[r][c]) != us.end()) return false;
                if(board[r][c] != '.') us.insert(board[r][c]);
            }
        }
        // 3-5 rows & 4-6 sub-boxes
        for(int c = 0; c < 9; ++c)
        {
            if(c%3 == 0) us.clear();
            for(int r = 3; r < 6; ++r)
            {
                if(us.find(board[r][c]) != us.end()) return false;
                if(board[r][c] != '.') us.insert(board[r][c]);
            }
        }
        // 6-8 rows & 7-9 sub-boxes
        for(int c = 0; c < 9; ++c)
        {
            if(c%3 == 0) us.clear();
            for(int r = 6; r < 9; ++r)
            {
                if(us.find(board[r][c]) != us.end()) return false;
                if(board[r][c] != '.') us.insert(board[r][c]);
            }
        }
        
        return true;
    }
};