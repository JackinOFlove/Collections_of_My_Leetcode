/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] minCostClimbingStairs
 */

// @lc code=start
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        vector<int> dp(2);
        dp[0] = 0;
        dp[1] = 0;
        for (int i = 2; i < cost.size() + 1; i++)
        {
            int sum = min(dp[0] + cost[i - 2], dp[1] + cost[i - 1]);
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
    int minCostClimbingStairs(vector<int> &cost)
    {
        vector<int> dp(cost.size() + 1);
        dp[0] = 0;
        dp[1] = 0;
        for (int i = 2; i < cost.size() + 1; i++)
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        return dp[cost.size()];
    }
};
*/
// @lc code=end
