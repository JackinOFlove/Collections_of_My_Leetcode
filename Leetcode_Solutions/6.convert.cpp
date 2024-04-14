/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] convert
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;
        else
        {
            string res = "";
            for (int i = 0; i < numRows; i++)
            {
                int count = 1;
                int col_index = i;
                while (col_index < s.size())
                {
                    if (i == 0 || i == numRows - 1)
                    {
                        res += s[col_index];
                        col_index += (2 * numRows - 2);
                    }
                    else
                    {
                        res += s[col_index];
                        col_index = (2 * numRows - 2) * count - col_index;
                    }
                    count++;
                }
            }
            return res;
        }
    }
};
// @lc code=end
