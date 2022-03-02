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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA){
            ListNode* curr = headB;
            while(curr){
                if(headA == curr){
                    return curr;
                }
                curr=curr->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};


//hashing method is better
// node* intersectionPresent(node* head1,node* head2) {
//      unordered_set<node*> st;
//     while(head1 != NULL) {
//        st.insert(head1);
//        head1 = head1->next;
//     }
//     while(head2 != NULL) {
//         if(st.find(head2) != st.end()) return head2;
//         head2 = head2->next;
//     }
//     return NULL;

// }