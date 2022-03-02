
//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int l1 = 0, l2 = 0;
        ListNode *cur1 = headA, *cur2 = headB;
        while (cur1)
        {
            l1++;
            cur1 = cur1->next;
        }
        while (cur2)
        {
            l2++;
            cur2 = cur2->next;
        }
        cur1 = headA;
        cur2 = headB;
        int difference = abs(l1 - l2);
        if (l1 > l2)
        {
            while (difference--)
                cur1 = cur1->next;
        }
        else
        {
            while (difference--)
                cur2 = cur2->next;
        }
        while (cur1 && cur2)
        {
            if (cur1 == cur2)
                return cur1;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        return nullptr;
    }
};