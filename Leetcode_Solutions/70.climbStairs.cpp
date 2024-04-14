/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] climbStairs
 */

// @lc code=start
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
            return n;
        vector<int> dp(3);
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i < n + 1; i++)
        {
            int sum = dp[1] + dp[2];
            dp[1] = dp[2];
            dp[2] = sum;
        }
        return dp[2];
    }
};
/*
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
            return n;
        vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i < n + 1; i++)
            dp[n] = dp[n - 1] + dp[n - 2];
        return dp[n];
    }
};
*/
// @lc code=end
