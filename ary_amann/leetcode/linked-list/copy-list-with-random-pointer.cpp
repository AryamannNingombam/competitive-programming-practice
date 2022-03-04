
class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        unordered_map<Node *, Node *> hash;
        Node *result = new Node(0);
        Node *cur = result, *cur_head = head;
        while (cur_head)
        {
            cur->next = new Node(cur_head->val);
            hash[cur_head] = cur->next;
            cur = cur->next;
            cur_head = cur_head->next;
        }
        cur = result->next, cur_head = head;
        while (cur_head)
        {
            cur->random = hash[cur_head->random];
            cur = cur->next;
            cur_head = cur_head->next;
        }

        return result->next;
    }
};