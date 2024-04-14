/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] twoSum
 */

// @lc code=start
/*hashtable method*/
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++)
        {
            int goal_number = target - nums[i];
            auto iter = hashmap.find(goal_number);
            if (iter != hashmap.end())
                return {iter->second, i};
            else
                hashmap.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};
/*brute method
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};
*/
// @lc code=end
