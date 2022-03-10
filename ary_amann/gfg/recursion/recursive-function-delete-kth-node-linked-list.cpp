

class Solution
{
    ListNode *deleteKthNode(ListNode *head, int k)
    {
        if (head == nullptr || k <= 0)
            return head;
        if (k == 1)
        {
            return head->next;
        }
        head->next = deleteKthNode(head->next, k - 1);
        return head;
    }
};