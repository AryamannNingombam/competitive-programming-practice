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

//yeh method TLE de raha hai
/*
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
    if(head == NULL||head->next == NULL) return head;
        
    for(int i=0;i<k;i++) {
        ListNode* temp = head;
        while(temp->next->next != NULL) temp = temp->next;
        ListNode* end = temp->next;
        temp->next = NULL;
        end->next = head;
        head = end;
    }
        
    return head;
        
        
        
        
    }
};
*/


//this is sexy soln easyyyy you need to get in the habit of solving it like this 
//instead of over complivating the code

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
         if(head == NULL||head->next == NULL||k == 0) return head;
        ListNode* temp = head;
        int length = 1;
        while(temp->next != NULL) {
            ++length;
            temp = temp->next;
        }
        temp->next = head;
        k = k%length; 
        int end = length-k; 
        while(end--) temp = temp->next;
        head = temp->next;
        temp->next = NULL;

        return head;
        
    
        
    }
};
