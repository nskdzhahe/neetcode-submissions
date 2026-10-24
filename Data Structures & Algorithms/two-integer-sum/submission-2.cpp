class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());
        int l = 0, r = copy.size() - 1;
        int tong;
        while (l < r)
        {
            tong = copy[l] + copy[r];
            if (tong > target)
                r--;
            else if (tong < target)
                l++;
            else
                break;
        }
        int vtl = find(nums.begin(), nums.end(), copy[l]) - nums.begin();
        int vtr;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] == copy[r])
            {
                vtr = i;
                break;
            }
        }
        int tmp1 = min(vtl, vtr), tmp2 = max(vtr, vtl);
        vtl = tmp1;
        vtr = tmp2;
        return {vtl, vtr};
    }
};
