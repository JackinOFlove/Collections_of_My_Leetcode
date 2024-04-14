/*
 * @lc app=leetcode.cn id=96 lang=cpp
 *
 * [96] numTrees
 */

// @lc code=start
class Solution
{
public:
    int numTrees(int n)
    {
        vector<int> dp(n + 1);
        dp[0] = 1;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < i + 1; j++)
                dp[i] += dp[j - 1] * dp[i - j];
        }
        return dp[n];
    }
};
// @lc code=end
