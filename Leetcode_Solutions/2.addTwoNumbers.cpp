/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] addTwoNumbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head1 = l1;
        ListNode *head2 = l2;
        while (head1 != nullptr)
        {
            if (head2 != nullptr)
            {
                head1->val += head2->val;
                head2 = head2->next;
            }
            if (head1->next == nullptr && head2 != nullptr)
            {
                head1->next = head2;
                break;
            }
            head1 = head1->next;
        }
        merge(l1);
        return l1;
    }
    void merge(ListNode *head)
    {
        while (head->next != nullptr)
        {
            if (head->val >= 10)
            {
                head->val %= 10;
                head->next->val++;
            }
            head = head->next;
        }
        if (head->val >= 10)
        {
            head->val %= 10;
            ListNode *newnode = new ListNode(1);
            head->next = newnode;
        }
    }
};
// @lc code=end
