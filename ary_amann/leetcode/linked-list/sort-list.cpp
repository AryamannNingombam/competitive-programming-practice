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
    ListNode *reverseNode(ListNode *head, int k)
    {
        ListNode *current = head, *previous = NULL, *next = NULL;
        while (current && k--)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }

public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        int counter = k;
        vector<ListNode *> nodes = {head};
        ListNode *cur = head;
        while (cur)
        {
            counter = k;
            while (cur && counter--)
            {
                cur = cur->next;
            }
            if (cur)
                nodes.push_back(cur);
        }
        for (int i = 0; i < nodes.size() - 1; i++)
        {
            nodes[i] = reverseNode(nodes[i], k);
        }
        if (counter == 0)
            nodes[nodes.size() - 1] = reverseNode(nodes[nodes.size() - 1], k);

        for (int i = 0; i < nodes.size() - 1; i++)
        {
            cur = nodes[i];
            while (cur->next)
                cur = cur->next;
            cur->next = nodes[i + 1];
        }

        return nodes[0];
    }
};