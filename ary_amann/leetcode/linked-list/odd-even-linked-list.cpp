
class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        ListNode *h1 = new ListNode(0);
        ListNode *h2 = new ListNode(0);
        ListNode *cur1 = h1;
        ListNode *cur2 = h2;
        int counter = 1;
        while (head)
        {
            if (counter & 1)
            {
                cur1->next = new ListNode(head->val);
                cur1 = cur1->next;
            }
            else
            {
                cur2->next = new ListNode(head->val);
                cur2 = cur2->next;
            }
            head = head->next;
            counter++;
        }
        cur1->next = h2->next;
        return h1->next;
    }
};