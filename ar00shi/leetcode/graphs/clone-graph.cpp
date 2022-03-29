/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
public:
    unordered_map<Node *, Node *> hash;
    Node *cloneGraph(Node *node)
    {
        if (node == NULL)
        {
            return NULL;
        }
        if (hash.find(node) == hash.end())
        {
            hash[node] = new Node(node->val, {});

            for (auto adj : node->neighbors)
            {
                hash[node]->neighbors.push_back(cloneGraph(adj));
            }
        }

        return hash[node];
    }
};

// dont fully get it