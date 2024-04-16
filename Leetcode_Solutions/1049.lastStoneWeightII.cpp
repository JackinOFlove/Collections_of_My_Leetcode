/*
 * @lc app=leetcode.cn id=1049 lang=cpp
 *
 * [1049] lastStoneWeightII
 */

// @lc code=start
class Solution
{
public:
    int lastStoneWeightII(vector<int> &stones)
    {
        int totalweight = 0;
        for (int i = 0; i < stones.size(); i++)
            totalweight += stones[i];
        int target = totalweight / 2;
        vector<int> dp(15001, 0);
        for (int i = 0; i < stones.size(); i++)
        {
            for (int j = target; j >= stones[i]; j--)
                dp[j] = max(dp[j], dp[j - stones[i]] + stones[i]);
        }
        return totalweight - 2 * dp[target];
    }
};
// @lc code=end
