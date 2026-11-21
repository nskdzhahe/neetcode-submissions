class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int zero = 0;
        vector<int> v;
        long long res = 0;
        bool first = true;
        for (int x : nums)
        {
            if (x == 0)
                zero++;
            else
            {
                if (first)
                {
                    res = 1;
                    first = false;
                }
                res *= x;
            }
        }
        for (int x : nums)
        {
            if (x == 0)
                if(zero==1) v.push_back(res);
                else v.push_back(0);
            else if (zero)
                v.push_back(0);
            else
                v.push_back(res / x);
        }
        return v;
    }
};
