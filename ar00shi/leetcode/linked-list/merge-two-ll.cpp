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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newLL = new ListNode(NULL);
        ListNode* head = newLL;
        ListNode* curr1 = list1;        
        ListNode* curr2 = list2;

        while(curr1 && curr2){
            if(curr1->val < curr2->val){
                newLL->next=curr1;
                curr1=curr1->next;
            }
            else{
                newLL->next=curr2;
                curr2=curr2->next;

            }
            newLL=newLL->next;

        }
        
    if(curr1!=NULL){
        newLL->next=curr1;
    }
 
    if(curr2!=NULL){
        newLL->next=curr2;
    }
        
        return head->next;
        
    }
};