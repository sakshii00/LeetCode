/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool compare(TreeNode *root, TreeNode* subRoot){
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL || subRoot==NULL) return false;
        if(root->val==subRoot->val){ 
                bool left=compare(root->left, subRoot->left);
                bool right=compare(root->right, subRoot->right);
            return left&&right;
        }
        return false;
        
        
        
    }
    void preOrderFind(TreeNode* root, TreeNode* subRoot, vector<TreeNode*> &nodes){
        //i want to return the node that has same value as subRoot
        if(root==NULL) return;
        if(root->val==subRoot->val){
            nodes.push_back(root);
        }
        
       
           preOrderFind(root->left, subRoot, nodes);
        
       
            preOrderFind(root->right, subRoot, nodes);
        
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<TreeNode*> nodes;
        preOrderFind(root, subRoot, nodes);
        
        if(nodes.empty()) return false;
        
        for(TreeNode* node:nodes){
            if(compare(node, subRoot)) return true;
        }
            return false;
    }
};
