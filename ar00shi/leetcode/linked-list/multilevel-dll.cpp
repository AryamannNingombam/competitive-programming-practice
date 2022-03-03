/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flattenLinKList(Node* head)
{
    Node* curr = head , *end = head;	
    while(curr)
    {
        Node* child = curr->child;
        Node* next = curr->next;
        
        if(child)
        {
            Node* endOfchild = flattenLinKList(child);
            curr->next = child;
            child->prev = curr;
            endOfchild->next = next;
            if(next) next->prev = endOfchild;
            curr->child = NULL;
            curr = endOfchild;
        }
        else
            curr = curr->next;
        if(curr) end = curr;
    }
    
    return end;
}
Node* flatten(Node* head) {
    
    if(head == NULL) return NULL;
    flattenLinKList(head);
    return head;
}
};

//horrible fucking code using recursion
//medthod using stacks is easier to understand tbh

/*
/*
// Definition for a Node.
class Node {
    public int val;
    public Node prev;
    public Node next;
    public Node child;
};
/*

class Solution {
    public Node flatten(Node head) {
        Node temp = head;
        Stack<Node> stk = new Stack<>();
        while(head != null){
            if(head.child != null){
                if(head.next != null) stk.push(head.next);
                head.next = head.child;
                head.next.prev = head;
                head.child = null;
            }
            else if(head.next == null && !stk.isEmpty()){
                head.next = stk.pop();
                head.next.prev = head;
            }
            head = head.next;
        }
        
        return temp;
    }
}
*/