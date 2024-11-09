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

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr; // Handle empty input
        
        // Use a map to store original node to cloned node mapping
        unordered_map<Node*, Node*> cloned;
        
        // Initialize BFS queue
        queue<Node*> q;
        q.push(node);

        // Create the root clone
        cloned[node] = new Node(node->val);

        // BFS traversal
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            // Iterate over the neighbors of the current node
            for (Node* neighbor : current->neighbors) {
                // If neighbor is not cloned, clone it
                if (cloned.find(neighbor) == cloned.end()) {
                    cloned[neighbor] = new Node(neighbor->val);
                    q.push(neighbor);
                }
                
                // Add the cloned neighbor to the current cloned node's neighbor list
                cloned[current]->neighbors.push_back(cloned[neighbor]);
            }
        }

        // Return the clone of the starting node
        return cloned[node];
    }
};

