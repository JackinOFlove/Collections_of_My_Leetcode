/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] isValid
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        int length = s.size();
        if (length % 2 == 1)
            return false;
        stack<char> strst;
        for (int i = 0; i < length; i++)
        {
            if (!strst.empty())
            {
                if (s[i] == ')' && strst.top() == '(')
                {
                    strst.pop();
                    continue;
                }
                if (s[i] == ']' && strst.top() == '[')
                {
                    strst.pop();
                    continue;
                }
                if (s[i] == '}' && strst.top() == '{')
                {
                    strst.pop();
                    continue;
                }
            }
            strst.push(s[i]);
        }
        return strst.empty();
    }
};
// @lc code=end
