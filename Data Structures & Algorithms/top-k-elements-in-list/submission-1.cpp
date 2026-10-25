class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int x : nums)
            m[x]++;
        vector<pair<int, int>> v(m.begin(), m.end());
        auto cmp = [](const pair<int, int> &a, const pair<int, int> &b)
        { return a.second > b.second; };
        sort(v.begin(), v.end(), cmp);
        vector<int> v1;
        for (int i = 0; i < k; i++)
        {
            v1.push_back(v[i].first);
        }
        return v1;
    }
};
