class Solution {
public:
    bool search(vector<vector<char>>& board, string word, int i, int j, int index)
    {
        if (index == word.size()-1)
        {
            return true;
        }
        board[i][j] = '*';
        char temp;
        if (j > 0)
        {
            if (word[index+1] == board[i][j-1])
            {
                temp = board[i][j-1];
                if (search(board, word, i, j-1, index+1))
                {
                    return true;
                }
                board[i][j-1] = temp;
            }
        }
        if (j < board[i].size()-1)
        {
            if (word[index+1] == board[i][j+1])
            {
                temp = board[i][j+1];
                if (search(board, word, i, j+1, index+1))
                {
                    return true;
                }
                board[i][j+1] = temp;
            }
        }
        if (i < board.size()-1)
        {
            if (word[index+1] == board[i+1][j])
            {
                temp = board[i+1][j];
                if (search(board, word, i+1, j, index+1))
                {
                    return true;
                }
                board[i+1][j] = temp;
            }
        }
        if (i > 0)
        {
            if (word[index+1] == board[i-1][j])
            {
                temp = board[i-1][j];
                if (search(board, word, i-1, j, index+1))
                {
                    return true;
                }
                board[i-1][j] = temp;
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool exist = false;
        for (int k = 0; k < word.size(); k++)
        {
            for (int i = 0; i < board.size(); i++)
            {
                for (int j = 0; j < board[i].size(); j++)
                {
                    if (word[k] == board[i][j])
                    {
                        exist = true;
                    }
                }
            }
            if (!exist)
            {
                return false;
            }
            exist = false;
        }
        bool flag = false;
        vector<vector<char>> temp(board);
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[i][j] == word[0])
                {
                    if (!flag)
                    {
                        flag = search(board, word, i, j, 0);
                        board = temp;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
        }
        return flag;
    }
};