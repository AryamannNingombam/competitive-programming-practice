/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node *, Node *> hash;
        Node *new_head = new Node(0);
        Node *cur = new_head, *old_head = head;
        while (old_head)
        {
            cur->next = new Node(old_head->val);
            hash[old_head] = cur->next;
            cur = cur->next;
            old_head = old_head->next;
        }
        cur = new_head->next, old_head = head;
        while (old_head)
        {
            cur->random = hash[old_head->random];
            cur = cur->next;
            old_head = old_head->next;
        }

        return new_head->next;
    }
};

//redo revisit this for bloody sure cause wtf