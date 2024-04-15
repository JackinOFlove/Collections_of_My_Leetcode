/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] longestCommonPrefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = "";
        string minstr = strs[0];
        if (strs.empty())
            return res;
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i].size() < minstr.size())
                minstr = strs[i];
        }
        for (int i = 0; i < minstr.size(); i++)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                if (minstr[i] != strs[j][i])
                    return res;
            }
            res += minstr[i];
        }
        return res;
    }
};
// @lc code=end
