/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] maxArea
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left, right, area;
        left = area = 0;
        right = height.size() - 1;
        while (left < right)
        {
            area = max(area, (right - left) * (min(height[left], height[right])));
            if (height[left] <= height[right])
                left++;
            else
                right--;
        }
        return area;
    }
};
// @lc code=end
