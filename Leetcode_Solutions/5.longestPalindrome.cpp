/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] longestPalindrome
 */

// @lc code=start
class Solution
{
public:
    string longestPalindrome(string s)
    {
        string retstring = "";
        for (int i = 0; i < s.length(); i++)
        {
            int left = i - 1;
            int right = i + 1;
            while (left >= 0 && right <= s.length() && s[left] == s[right])
            {
                left--;
                right++;
            }
            if (retstring.length() < right - left - 1)
                retstring = s.substr(left + 1, right - left - 1);
            left = i;
            right = i + 1;
            while (left >= 0 && right <= s.length() && s[left] == s[right])
            {
                left--;
                right++;
            }
            if (retstring.length() < right - left - 1)
                retstring = s.substr(left + 1, right - left - 1);
        }
        return retstring;
    }
};
// @lc code=end
