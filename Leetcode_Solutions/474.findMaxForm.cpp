/*
 * @lc app=leetcode.cn id=474 lang=cpp
 *
 * [474] findMaxForm
 */

// @lc code=start
class Solution
{
public:
    int findMaxForm(vector<string> &strs, int m, int n)
    {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int a = 0; a < strs.size(); a++)
        {
            int zero_num = 0;
            int one_num = 0;
            for (int b = 0; b < strs[a].size(); b++)
            {
                if (strs[a][b] == '0')
                    zero_num++;
                else
                    one_num++;
            }
            for (int i = m; i >= zero_num; i--)
            {
                for (int j = n; j >= one_num; j--)
                    dp[i][j] = max(dp[i][j], dp[i - zero_num][j - one_num] + 1);
            }
        }
        return dp[m][n];
    }
};
// @lc code=end
