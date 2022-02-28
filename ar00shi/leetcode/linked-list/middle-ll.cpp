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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        ListNode* next;
        int count=0;
        
        while(curr){
            curr=curr->next;
            count++;
        }
        curr=head;
        
        for(int i=0;i<count/2;i++){
            curr=curr->next;
        }
        
        return curr;
        
        
    }
};