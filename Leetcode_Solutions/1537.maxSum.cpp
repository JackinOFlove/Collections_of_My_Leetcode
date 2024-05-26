/*
 * @lc app=leetcode.cn id=1537 lang=cpp
 *
 * [1537] maxSum
 */

// @lc code=start
class Solution
{
public:
    int maxSum(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0;
        int j = 0;
        long sum1 = 0;
        long sum2 = 0;
        int length1 = nums1.size();
        int length2 = nums2.size();
        while (i < length1 && j < length2)
        {
            if (nums1[i] < nums2[j])
            {
                sum1 += nums1[i];
                i++;
            }
            else if (nums1[i] > nums2[j])
            {
                sum2 += nums2[j];
                j++;
            }
            else
            {
                sum1 += nums1[i];
                sum2 += nums2[j];
                long tempMax = max(sum1, sum2);
                sum1 = sum2 = tempMax;
                i++;
                j++;
            }
        }
        while (i < length1)
            sum1 += nums1[i++];
        while (j < length2)
            sum2 += nums2[j++];
        return (max(sum1, sum2) % 1000000007);
    }
};
// @lc code=end
