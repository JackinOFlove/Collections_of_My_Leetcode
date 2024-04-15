/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] romanToInt
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> strval =
            {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000},
            };
        int res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < s.size() - 1 && strval[s[i]] < strval[s[i + 1]])
                res -= strval[s[i]];
            else
                res += strval[s[i]];
        }
        return res;
    }
};
// @lc code=end
