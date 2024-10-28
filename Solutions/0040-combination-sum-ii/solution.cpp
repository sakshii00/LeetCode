class Solution {
public:
    void recursion(int idx, int target, vector<int> candidates, vector<vector<int>> &ans, vector<int> &temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }

    


        for(int i=idx; i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            
            temp.push_back(candidates[i]);

            
            recursion(i+1, target-candidates[i], candidates, ans, temp);
            temp.pop_back();

        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        recursion(0,target, candidates,ans, temp);
        return ans;
    }
};
