#include <bits/stdc++.h>

using namespace std;

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
    ListNode *mergeList(ListNode *l1, ListNode *l2)
    {
        ListNode *head = new ListNode(0);
        ListNode *cur = head;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                cur->next = l1;
                l1 = l1->next;
            }
            else
            {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if (l1)
            cur->next = l1;
        if (l2)
            cur->next = l2;
        return head->next;
    }

public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.empty())
            return nullptr;
        int n = lists.size();
        int interval = 1;
        while (interval < n)
        {
            for (int i = 0; i < n - interval; i += 2 * interval)
            {
                lists[i] = mergeList(lists[i], lists[i + interval]);
            }
            interval *= 2;
        }
        return lists[0];
    }
};