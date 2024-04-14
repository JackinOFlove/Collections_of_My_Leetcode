/*
 * @lc app=leetcode.cn id=486 lang=cpp
 *
 * [486] predictTheWinner
 */

// @lc code=start
class Solution
{
public:
    bool predictTheWinner(vector<int> &nums)
    {
        int Maxdifferent = Get_maxdifferent(nums, 0, nums.size() - 1);
        if (Maxdifferent >= 0)
            return true;
        else
            return false;
    }

private:
    int Get_maxdifferent(vector<int> &nums, int start, int end)
    {
        if (start == end)
            return nums[start];
        int select_start = nums[start] - Get_maxdifferent(nums, start + 1, end);
        int select_end = nums[end] - Get_maxdifferent(nums, start, end - 1);
        return max(select_start, select_end);
    }
};
// @lc code=end
