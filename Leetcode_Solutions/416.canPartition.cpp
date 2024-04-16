/*
 * @lc app=leetcode.cn id=416 lang=cpp
 *
 * [416] canPartition
 */

// @lc code=start
class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];
        if (sum % 2 == 1)
            return false;
        int target = sum / 2;
        vector<int> dp(10001, 0);
        for (int i = 0; i < nums.size(); i++)
            for (int j = target; j >= nums[i]; j--)
                dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
        return dp[target] == target;

        /*two_dimension*/
        /*
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];
        if (sum % 2 == 1)
            return false;
        int target = sum / 2;
        vector<vector<int>> dp(nums.size(), vector<int>(target + 1, 0));
        for (int i = 0; i < target + 1; i++)
        {
            if (i >= nums[0])
                dp[0][i] = nums[0];
        }
        for (int i = 1; i < nums.size(); i++)
        {
            for (int j = 1; j <= target; j++)
            {
                if (j < nums[i])
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - nums[i]] + nums[i]);
            }
        }
        return dp[nums.size() - 1][target] == target;
        */
    }
};
// @lc code=end
