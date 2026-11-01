class Solution {
public:
    bool isPalindrome(string s)
    {
        int l = 0, r = s.size() - 1;
        while (l < r)
        {
            if (!isalnum(tolower(s[l])) || !isalnum(tolower(s[r])))
            {
                if (!isalnum(tolower(s[l])))
                    l++;
                if (!isalnum(tolower(s[r])))
                    r--;
            }
            else
            {
                if (tolower(s[l]) != tolower(s[r]))
                    return false;
                l++, r--;
            }
        }
        return true;
    }
};
