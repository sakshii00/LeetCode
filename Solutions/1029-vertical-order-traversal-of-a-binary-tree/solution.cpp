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

    void getPositions(TreeNode* root, int column, int row, map<int, vector<pair<int, int>>> &mp) {
    if (root == NULL) return;
    pair<int, int> p = {row, root->val};
    mp[column].push_back(p);
    getPositions(root->left, column - 1, row + 1, mp);   
    getPositions(root->right, column + 1, row + 1, mp);  
}

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int, int>>> mp;
        vector<vector<int>> ans;
        getPositions(root, 0,0, mp);
     
        for(auto i:mp){
            vector<pair<int, int>> v=i.second;
            if(v.size()>1){
                sort(v.begin(), v.end());
            }
            //add the vectors to ans
            vector<int> temp;
            for(int j=0; j<v.size();j++){
                temp.push_back(v[j].second);
            }
            ans.push_back(temp);
        }



        return ans;
        //can have a map which can store the column number and values in pair along with their row number so that it can be arranged accordingly.
        //then go through the whole map and crease ans array
        //position of a node based on that calculate its column and row and add to map. 

    }
};
