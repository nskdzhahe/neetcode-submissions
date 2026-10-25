class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> m;
        vector<vector<string>> v;

        for (string x : strs)
        {
            string y=x;
            sort(y.begin(),y.end());
            m[y].push_back(x);
        }
        for (auto it : m)
        {
            v.push_back(it.second);
        }
        return v;
    }
};
