/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] lengthOfLongestSubstring
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int left, right;
        left = right = 0;
        int length, maxlength;
        length = maxlength = 0;
        unordered_set<char> letterset;
        for (; right < s.size(); right++)
        {
            while (letterset.find(s[right]) != letterset.end())
            {
                letterset.erase(s[left++]);
                length--;
            }
            letterset.insert(s[right]);
            length++;
            maxlength = max(length, maxlength);
        }
        return maxlength;
    }
};
// @lc code=end
/*