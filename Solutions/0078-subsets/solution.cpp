class Solution {
public:
    void recursion(int idx, vector<int> nums, vector<int> v, vector<vector<int>> &ans){
        if(idx>=nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[idx]);
        recursion(idx+1, nums, v, ans);
        v.pop_back();
        recursion(idx+1, nums, v, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        recursion(0,nums,v,ans);
        return ans;
    }
};
