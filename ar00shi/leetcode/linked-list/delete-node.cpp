/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr=node;
        curr->val=curr->next->val;
        curr->next=curr->next->next;
    }
};


//how is this working, there is no traversal taking place