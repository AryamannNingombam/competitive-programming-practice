
class Solution
{
    int length(ListNode **head)
    {
        int result = 0;
        ListNode *cur = (*head);
        while (cur != nullptr)
        {
            result++;
            cur = cur->next;
        }
        return result;
    }

public:
    ListNode *rotateRight(ListNode *head, int k)
    {

        if (!head || k == 0 || !head->next)
            return head;
        int l = length(&head);
        int r = k % l;
        int skip = l - r;
        if (skip == 0 || skip == l)
            return head;
        ListNode *cur = head;
        while (--skip)
        {
            cur = cur->next;
        }
        ListNode *new_head = cur->next;
        cur->next = nullptr;
        cur = new_head;
        while (cur && cur->next)
        {
            cur = cur->next;
        }
        if (cur)
            cur->next = head;
        return new_head;
    }
};