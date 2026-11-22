class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> v;
        vector<int> l(100000);
        vector<int> r(100000);
        int x;
        int len = nums.size();
        l[0] = nums[0];
        r[0] = nums[len - 1];
        for (int i = 1; i < len; i++)
        {
            l[i] = l[i - 1] * nums[i];
            r[i] = r[i - 1] * nums[len - 1 - i];
        }
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
                x = r[len - 2];
            else if (i == len - 1)
                x = l[len - 2];
            else
                x = r[len - i - 2] * l[i - 1];
            v.push_back(x);
        }
        return v;
    }
};
