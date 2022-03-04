
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
    ListNode *return_mid(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = nullptr;
        while (fast && fast->next)
        {
            slow = !slow ? head : slow->next;
            fast = fast->next->next;
        }
        auto temp = slow->next;
        slow->next = nullptr;
        return temp;
    }
    ListNode *merge(ListNode *l, ListNode *r)
    {
        ListNode *head = new ListNode(0);
        ListNode *cur = head;
        while (l && r)
        {
            if (l->val < r->val)
            {
                cur->next = l;
                l = l->next;
            }
            else
            {
                cur->next = r;
                r = r->next;
            }
            cur = cur->next;
        }
        if (l)
            cur->next = l;
        if (r)
            cur->next = r;
        return head->next;
    }

public:
    ListNode *sortList(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *mid = return_mid(head);
        ListNode *l = head, *r = mid;
        return merge(sortList(l), sortList(r));
    }
};