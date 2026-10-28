class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        unordered_set<int> seti;
        unordered_set<int> setj;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    seti.insert(i);
                    setj.insert(j);
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (seti.count(i)||setj.count(j))
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
