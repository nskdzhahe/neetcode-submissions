class Solution {
public:
    int maxProfit(vector<int> &prices)
    {
        int min = 99999, maxx = 0;
        for (int x : prices)
        {
            if (x < min)
                min = x;
            maxx = max(maxx, x - min);
        }
        return maxx;
    }
};
