
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *f = l1, *s = l2;
        ListNode *head = new ListNode(0);
        ListNode *cur = head;
        int carry = 0;
        while (f && s)
        {
            int sum = f->val + s->val + carry;
            cur->next = new ListNode(sum % 10);
            carry = sum / 10;
            cur = cur->next;
            f = f->next;
            s = s->next;
        }

        while (f)
        {
            int sum = f->val + carry;
            cur->next = new ListNode(sum % 10);
            carry = sum / 10;
            cur = cur->next;
            f = f->next;
        }
        while (s)
        {
            int sum = s->val + carry;
            cur->next = new ListNode(sum % 10);
            carry = sum / 10;
            cur = cur->next;
            s = s->next;
        }
        if (carry != 0)
            cur->next = new ListNode(carry);
        return head->next;
    }
};