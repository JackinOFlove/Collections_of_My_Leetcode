/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] canPlaceFlowers
 */

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int sumFlowers = 0;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
            {
                if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
                {
                    sumFlowers++;
                    flowerbed[i] = 1;
                }
            }
        }
        return (sumFlowers >= n);
    }
};
// @lc code=end
