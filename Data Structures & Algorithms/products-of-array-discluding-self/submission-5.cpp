class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> res(len, 1);

        long long tmp = 1;
        for (int i = 0; i < len; i++)
        {
            
            res[i] = tmp;
            tmp *= nums[i];
        }
        tmp = 1;
        for (int i = len - 1; i >= 0; i--)
        {
            res[i] = tmp * res[i];
            tmp *= nums[i];
        }
        return res;
    }
};
