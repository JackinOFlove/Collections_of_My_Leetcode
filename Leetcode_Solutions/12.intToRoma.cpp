/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] intToRoma
 */

// @lc code=start
class Solution
{
public:
    const pair<int, string> strval[13] =
        {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"},
    };
    string res = "";
    string intToRoman(int num)
    {
        for (int i = 0; i < 13; i++)
        {
            while (num >= strval[i].first)
            {
                res += strval[i].second;
                num -= strval[i].first;
            }
        }
        return res;
    }
};
// @lc code=end
