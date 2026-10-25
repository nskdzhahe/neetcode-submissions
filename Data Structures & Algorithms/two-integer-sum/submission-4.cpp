class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int p;
        int l, r;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m[nums[i]] == -1)
            {

                l = min(i, m[target - nums[i]]);
                r = max(i, m[target - nums[i]]);
                if (nums[i] == target - nums[i])
                    l = min(i, p);
                break;
            }
            m[nums[i]] = i;
            if (nums[i] == target - nums[i])
                p = i;
            m[target - nums[i]] = -1;

        }
        return {l, r};
    }
};
