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
    int findHeightOfSubTree(TreeNode* node, int &prevmax){
        if(node==NULL) return 0;
        int lh=findHeightOfSubTree(node->left, prevmax);
        int rh=findHeightOfSubTree(node->right, prevmax);
        prevmax=max(prevmax,lh+rh);
        return 1+max(lh,rh);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int prevmax=0;
        int leftHeight=findHeightOfSubTree(root,prevmax);
        return prevmax;
    }
};
