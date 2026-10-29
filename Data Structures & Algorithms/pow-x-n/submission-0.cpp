class Solution {
public:
    double myPow(double x, int n)
    {
        double res = 1.0;
        int m = abs(n);
        vector<int> arr = {m};
        while (m)
        {
            arr.push_back(m / 2);
            m /= 2;
        }
        for (int i = arr.size()-1; i >= 0; i--)
        {
            if (arr[i] % 2 != 0)
                res = res * res * x;
            else
                res *= res;
        }
        return (n<0?1/res:res);
    }
};
