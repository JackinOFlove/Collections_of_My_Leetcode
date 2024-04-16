/*
 * @lc app=leetcode.cn id=494 lang=cpp
 *
 * [494] findTargetSumWays
 */

// @lc code=start
class Solution
{
public:
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];
        if (abs(target) > sum)
            return false;
        else if ((target + sum) % 2 == 1)
            return false;
        else
        {
            int bagSize = (target + sum) / 2;
            vector<int> dp(bagSize + 1, 0);
            dp[0] = 1;
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = bagSize; j >= nums[i]; j--)
                    dp[j] += dp[j - nums[i]];
            }
            return dp[bagSize];
        }
    }
};
// @lc code=end
