class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int l=length(head);
        ListNode* newnode=reversek(head,l,k);
        return newnode;
    }
    ListNode* reversek(ListNode* head,int l,int k){
        if(l<k)return head;
        ListNode* prevptr=NULL;
        ListNode* curptr=head;
        ListNode* nextptr;
        int count=1;
        while(count<=k){
            nextptr=curptr->next;
            curptr->next=prevptr;
            prevptr=curptr;
            curptr=nextptr;
            count++;
            l--;
        }
        head->next=reversek(nextptr,l,k);
        return prevptr;
        
    }
    int length(ListNode* head){
        ListNode* temp=head;
        int l=1;
        while(temp->next!=NULL){
            l++;
            temp=temp->next;
        }
        return l;
    }
}