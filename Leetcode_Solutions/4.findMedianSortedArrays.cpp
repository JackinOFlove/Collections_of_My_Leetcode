/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] findMedianSortedArrays
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int nums1_Size = nums1.size();
        int nums2_Size = nums2.size();
        int Sum_length = nums1_Size + nums2_Size;
        int middle = Sum_length / 2 + 1;
        int pre, cur, i, j;
        pre = cur = i = j = 0;
        for (int k = 0; k < middle; k++)
        {
            pre = cur;
            if (j >= nums2_Size)
                cur = nums1[i++];
            else if (i >= nums1_Size)
                cur = nums2[j++];
            else if (nums1[i] <= nums2[j])
                cur = nums1[i++];
            else
                cur = nums2[j++];
        }
        if (Sum_length % 2 == 0)
            return (pre + cur) / 2.0;
        else
            return cur;
    }
};
// @lc code=end
