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
    ListNode *helper(head)
    {
        if (!head || !head->next)
            return head;
        ListNode *firstHead = head;
        ListNode *secondHead = head->next;
        ListNode *temp = head;
        temp = helper(head->next->next);
        firstHead->next = temp;
        secondHead->next = firstHead;
        return secondHead;
    }

public:
    ListNode *swapPairs(ListNode *head)
    {
        return helper(head);
    }
};