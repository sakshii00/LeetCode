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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //level order traversal 
        //add a flag in between on level which needs reverse
        //flag=1 signifies normal but flag=0 is reversed
        if(root==NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        int flag=1;
        while(q.size()!=0){
            int size=q.size(); //defines the size for that level
            vector<int> levels(size);
            for(int i=0;i<size;i++){
                TreeNode* temp= q.front();
                //add left and right to queue if they exist
                //see flag and add to level vector accordingly
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                if(flag){
                    levels[i]=temp->val;
                }
                else{
                    levels[size-i-1]=temp->val;
                }
            }
            //adding level in ans
            ans.push_back(levels);
            //switch flag
            flag=!flag;
        }
        return ans;
        
    }
};
