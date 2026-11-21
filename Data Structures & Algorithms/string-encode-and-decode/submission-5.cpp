class Solution {
public:

    string encode(vector<string> &strs)
    {

        string s = "";
        for (int i = 0; i < strs.size(); i++)
        {
            s += to_string(strs[i].size());
            s += "#";
            s += strs[i];
        }
        return s;
    }

    vector<string> decode(string s)
    {
        vector<string> v={};
        string x;
        string so;
        int i=0;
        while(i<s.size()){
            so="";
            while(s[i]!='#'){
                so+=s[i];
                i++;
            }
            x=s.substr(i+1,stoi(so));
            v.push_back(x);
            i+=stoi(so)+1;
        }
        return v;
    }
};
