/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] searchMatrix
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int M = matrix.size();
        int N = matrix[0].size();
        int row = 0;
        while (row < M && N > 0)
        {
            if (matrix[row][N - 1] > target)
                N--;
            else if (matrix[row][N - 1] < target)
                row++;
            else
                return true;
        }
        return false;
    }
};
// @lc code=end
