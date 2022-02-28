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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next;
       
        while(curr) {
            next = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next;
        }

        head = prev; 
        
        return head;
        
        
        
        /*recursive method is lil iffy atm*/
//         if (head == NULL||head->next==NULL)
//             return head;

//         ListNode* nnode = reverseList(head->next);
//         head->next->next = head;
//         head->next = NULL;
//         return nnode;
        
    }
};