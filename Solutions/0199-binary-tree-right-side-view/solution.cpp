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
    void helper(TreeNode* root, int level, vector<int> &v){
        if(root==NULL) return;
        if(level==v.size()){
            v.push_back(root->val);
        }
        helper(root->right, level+1, v);
        helper(root->left, level+1, v);
    }
    vector<int> rightSideView(TreeNode* root) {
        //recursive approach but with level handling such that we add all the right ones and left ones that are there in level below.
        vector<int> ans;
        helper(root, 0, ans);
        return ans;

    }
};
