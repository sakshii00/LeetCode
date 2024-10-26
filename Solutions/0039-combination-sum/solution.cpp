class Solution {
public:
    void recursive(int idx, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(idx==candidates.size()){
            return;
        }
        if(candidates[idx]<=target){
        temp.push_back(candidates[idx]);
        recursive(idx, candidates, target-candidates[idx], ans, temp);
        temp.pop_back();}
        recursive(idx+1, candidates, target, ans, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        recursive(0, candidates, target, ans, temp);
        return ans;
    }
};
