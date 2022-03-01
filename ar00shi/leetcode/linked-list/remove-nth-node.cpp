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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL){
            return NULL;
        }
        
        int count=0;
        ListNode* curr=head;
        
        while(curr){
            count++;
            curr=curr->next;
        }
        
        count = count - n;
        if(count==0){
            return head->next;
        }
        
        curr=head;
        ListNode* prev=NULL;
        
        while(count>0){
            prev=curr;
            curr=curr->next;
            count--;
        }
        
        prev->next=curr->next;
        curr->next=NULL;
        delete(curr);

        
        return head;
        
        //two pointer approach is also semxy, first point1 ok n aage badhai, 
        //then dono ko sathme till end badhao, so first will be at the last, 
        //second will be right before node to be deleted, 
        //basically window will be mantained bw the two pointers and then like before normal
        
    }
};