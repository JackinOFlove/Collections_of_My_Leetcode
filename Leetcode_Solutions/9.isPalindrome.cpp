/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] isPalindrome
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        else
        {
            long rev_x = 0;
            int temp = x;
            while (temp)
            {
                rev_x = rev_x * 10 + temp % 10;
                temp /= 10;
            }
            return x == rev_x;
        }
    }
};
// @lc code=end
