/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> markParents(TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        unordered_map<TreeNode*, TreeNode*> mp;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL){
                    q.push(temp->left);
                    mp[temp->left]=temp;
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                    mp[temp->right]=temp;
                }
            }
        }
        return mp;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(target==NULL || root==NULL) return {};
        if(k==0) return {target->val};
        //mark the parents of the node
        unordered_map<TreeNode*, TreeNode*> mp=markParents(root);
        //go radially outwards to nodes that have not been visited yet
        queue<TreeNode*> q;
        q.push(target);
        unordered_map<TreeNode*, bool> visited;
        visited[target]=true;
        int cnt=0;
        while(!q.empty()){
            int size=q.size();
            cnt++; 
             
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL && !visited[temp->left]){
                    q.push(temp->left);
                    visited[temp->left]=true;
                }
                if(temp->right!=NULL && !visited[temp->right]){
                    q.push(temp->right);
                    visited[temp->right]=true;
                }
                if(mp.find(temp)!=mp.end() && !visited[mp[temp]]){
                    q.push(mp[temp]);
                    visited[mp[temp]]=true;
                }
            }  
            if(cnt==k) break;
               
            }
            vector<int> v;
            while(!q.empty()){
                v.push_back(q.front()->val);
                q.pop();
            }

            return v;
        

    }
};
