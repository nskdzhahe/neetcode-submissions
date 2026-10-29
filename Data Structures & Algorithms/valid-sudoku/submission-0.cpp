class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {

        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> ngang, doc;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                    ngang[board[i][j]]++;
                if (board[j][i] != '.')
                    doc[board[j][i]]++;
            }

            for (auto it : ngang)
            {
                if (it.second > 1)
                    return false;
            }
            for (auto it : doc)
            {
                if (it.second > 1)
                    return false;
            }
        }

        for (int i = 0; i < 9; i += 3)
        {

            for (int j = 0; j < 9; j += 3)
            {

                unordered_map<char, int> vuong;
                for (int m = 0; m < 3; m++)
                {
                    for (int n = 0; n < 3; n++)
                    {

                        if (board[i + m][j + n]!= '.')
                        {
                            vuong[board[i + m][j + n]]++;
                        }
                    }
                }

                for (auto it : vuong)
                {
                    if (it.second > 1)
                        return false;
                }
            }
        }

        return true;
    }
};
