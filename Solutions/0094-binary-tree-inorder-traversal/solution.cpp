class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s;
        TreeNode* temp = root;

        while (temp != NULL || !s.empty()) {
            // Traverse to the leftmost node
            while (temp != NULL) {
                s.push(temp);
                temp = temp->left;
            }
            // Process the node
            temp = s.top();
            s.pop();
            v.push_back(temp->val); // Add the node value to the result
            
            // Move to the right subtree
            temp = temp->right;
        }
        
        return v;
    }
};

