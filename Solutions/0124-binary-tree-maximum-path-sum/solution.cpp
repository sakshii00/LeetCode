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
    int helper(TreeNode* root, int &maxi){
        //using concept of max height
        //instead of 1 for height, we will use the nodes value 
        //and every node would have a left and right, we are going to take maximum sum from them.
        if(root==NULL) return 0;
        int leftSum=max(0,helper(root->left, maxi));
        int rightSum=max(0,helper(root->right, maxi));
        maxi=max(maxi, leftSum+rightSum+root->val);
        return (root->val + max(leftSum, rightSum));
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        int ans=helper(root, maxi);
        return maxi;
    }
};
