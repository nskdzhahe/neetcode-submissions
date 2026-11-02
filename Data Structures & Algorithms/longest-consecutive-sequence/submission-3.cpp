class Solution {
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> s;
        for (int x : nums)
            s.insert(x);
        unordered_map<int, bool> m;
        int dem = 0;
        int maxx = 0;
        int l, r;
        for (int x : nums)
        {
            l = x - 1;
            r = x + 1;
            if (m[x] == 0)
            {
                dem++;
                while (s.count(l) > 0 || s.count(r) > 0)
                {
                    if (s.count(l) > 0)
                    {
                        dem++;
                        m[l] = 1;
                        l--;
                    }
                    if (s.count(r) > 0)
                    {
                        dem++;
                        m[r] = 1;
                        r++;
                    }
                }
                maxx = max(maxx, dem);
                dem = 0;
            }
            m[x] = 1;
        }
        return maxx;
    }
};
