/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) return NULL;
        
        ListNode* first=head;
        ListNode* second=new ListNode(0);
        second=head->next;
        ListNode* second_head=second;

        
        while(second && second->next){
            first->next=second->next;
            first=first->next;
            second->next=first->next;
            second=second->next;
        }
        
        first->next=second_head;
        
        return head;

        
        
    }
};

//cute ass code bro do while karne ki jarurat nahi thi
//but logically that also works ig