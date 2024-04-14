/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] myAtoi
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0;
        int res = 0;
        int flag = 1;
        while (s[i] == ' ')
            i++;
        if (s[i] == '+')
            i++;
        else if (s[i] == '-')
        {
            flag = -1;
            i++;
        }
        while (i < s.size() && s[i] >= '0' && s[i] <= '9')
        {
            int value = s[i] - '0';
            if (res > INT_MAX / 10 && flag == 1)
                return INT_MAX;
            else if (res > INT_MAX / 10 && flag == -1)
                return INT_MIN;
            else if (res == INT_MAX / 10 && flag == 1 && value >= INT_MAX % 10)
                return INT_MAX;
            else if (res == INT_MAX / 10 && flag == -1 && flag * value <= INT_MIN % 10)
                return INT_MIN;
            else
                res = res * 10 + value;
            i++;
        }
        return flag * res;
    }
};
// @lc code=end
