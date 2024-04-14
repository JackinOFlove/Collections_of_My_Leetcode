/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] reverse
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int rev_x = 0;
        while (x)
        {
            if (rev_x > INT_MAX / 10 || rev_x < INT_MIN / 10)
                return 0;
            rev_x = rev_x * 10 + x % 10;
            x /= 10;
        }
        return rev_x;
    }
};
// @lc code=end
