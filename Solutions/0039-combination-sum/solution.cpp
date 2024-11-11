class Solution {
public:
    void combinationSumHelper(int idx, int target, vector<int> &candidates, vector<int> &temp, vector<vector<int>> &ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        
        if(idx==candidates.size()){
            return;
        }
        if(target<candidates[idx]){
            return;
        }
        
        //pick 
        temp.push_back(candidates[idx]);
        combinationSumHelper(idx, target-candidates[idx], candidates, temp, ans);
        //not pick
        temp.pop_back();
        combinationSumHelper(idx+1, target, candidates, temp, ans);
        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //one element can be taken as many times as we like
        //pick not pick recursion
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        combinationSumHelper(0, target, candidates, temp, ans);
        
        return ans;
        
        
    }
    
    
    
};
