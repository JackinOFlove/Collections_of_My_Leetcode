/*
 * @lc app=leetcode.cn id=343 lang=cpp
 *
 * [343] integerBreak
 */

// @lc code=start
class Solution
{
public:
    int integerBreak(int n)
    {
        vector<int> dp(n + 1);
        dp[1] = 0;
        dp[2] = 1;
        for (int i = 3; i < n + 1; i++)
        {
            for (int j = 1; j <= i / 2; j++)
                dp[i] = max(dp[i], max((i - j) * j, j * dp[i - j]));
        }
        return dp[n];
    }
};
// @lc code=end
