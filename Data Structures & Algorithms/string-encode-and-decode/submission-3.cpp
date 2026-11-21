class Solution {
public:

    string encode(vector<string> &strs)
    {
        string s = "";
        for (int i = 0; i < strs.size(); i++)
        {
            
            s += strs[i];
            
            s += "\n";
        }
        return s;
    }

    vector<string> decode(string s)
    {
        vector<string> v;
        stringstream ss(s);
        string x;
        while (getline(ss , x,'\n'))
        {
            if(x.size()==0) v.push_back("");
            else v.push_back(x);
        }

        return v;
}
};
