/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] fib
 */

// @lc code=start
class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
            return n;
        vector<int> dp(2);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i < n + 1; i++)
        {
            int sum = dp[0] + dp[1];
            dp[0] = dp[1];
            dp[1] = sum;
        }
        return dp[1];
    }
};
/*
class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
            return n;
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i < n + 1; i++)
            dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }
};

*/
// @lc code=end
