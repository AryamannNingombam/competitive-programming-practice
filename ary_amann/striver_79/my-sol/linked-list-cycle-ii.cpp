
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        if (!head)
            return nullptr;
        ListNode *fast = head, *slow = head;
        do
        {
            fast = fast->next;
            if (fast)
                fast = fast->next;
            slow = slow->next;
        } while (fast && fast->next && fast != slow);
        if (!fast || !fast->next)
            return nullptr;
        fast = head;
        while (fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};