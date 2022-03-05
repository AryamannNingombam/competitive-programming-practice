
class Solution
{
    Node *helper(Node **head, Node **parent)
    {
        // (*parent)->child = nullptr;
        (*parent)->next = (*head);
        (*head)->prev = (*parent);
        Node *it = (*head);
        while (it->next)
        {
            it = it->next;
        }
        return it;
    }

public:
    Node *flatten(Node *head)
    {
        if (!head)
            return head;
        Node *cur = head;
        while (cur)

            if (cur->child)
            {
                Node *temp = cur->next;
                Node *t = helper(&cur->child, &cur);
                cout << "t->val: " << t->val << endl;
                t->next = temp;
                if (temp)
                {
                    temp->prev = t;
                }
            }
        cur = cur->next;
    }
    Node *temp = head;
    while (temp)
        temp->child = nullptr, temp = temp->next;
    return head;
}
}
;