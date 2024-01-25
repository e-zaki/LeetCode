class Solution {
private:
    bool thereIsDouble(char *freq)
    {
        for (int i = 0; i < 9; i++)
        {
            if (freq[i] > 1)
                return true;
            freq[i] = 0;
        }
        return false;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        char freq[9] = {0};
        for (int i = 0; i < 3; i++)
        {
            // check duplicate each 9 square
            for (int j = 0; j < 3; j++)
            {
                // 3 * i] [3 * j];
                for (int k = 0; k < 3; k++)
                {
                    for (int l = 0; l < 3; l++)
                    {
                        // check board[3 * i + k] [3 * j + l]
                        if (isdigit(board[3 * i + k][3 * j + l]))
                            freq[board[3 * i + k][3 * j + l] - '1']++;
                    }
                }
                if (thereIsDouble(freq))
                    return false;

            }
        }
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (isdigit(board[i][j]))
                    freq[board[i][j] - '1']++;
            }
            if (thereIsDouble(freq))
                return false;
        }
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (isdigit(board[j][i]))
                    freq[board[j][i] - '1']++;
            }
            if (thereIsDouble(freq))
                return false;
        }
        return true;
    }
};