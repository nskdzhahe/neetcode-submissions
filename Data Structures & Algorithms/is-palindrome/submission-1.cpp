class Solution {
public:
    bool isPalindrome(string s)
    {
        int l = 0, r = s.size() - 1;
        while (l < r)
        {
            if (((tolower(s[l]) < 'a' || tolower(s[l]) > 'z')&&(tolower(s[l]) < '0' || tolower(s[l]) > '9')) || (tolower(s[r]) < 'a' || tolower(s[r]) > 'z')&&(tolower(s[r]) < '0' || tolower(s[r]) > '9'))
            {
                if (tolower(s[l]) < 'a' || tolower(s[l]) > 'z'&&(tolower(s[l]) < '0' || tolower(s[l]) > '9'))
                    l++;
                if (tolower(s[r]) < 'a' || tolower(s[r]) > 'z'&&(tolower(s[r]) < '0' || tolower(s[r]) > '9'))
                    r--;
            }
            else
            {
                if (tolower(s[l]) != tolower(s[r]))
                    return false;
                l++,r--;
            }

        }
        return true;
    }
};
