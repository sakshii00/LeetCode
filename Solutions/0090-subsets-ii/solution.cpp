class Solution {
public:
    void recursion(int idx, vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp){
        if(idx==nums.size()){
            return;
        }

       
        for(int i=idx; i<nums.size();i++){
            //see which elements i can pick 
            if(i>idx && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            ans.push_back(temp);
            recursion(i+1, nums, ans, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans={{}};
        vector<int> temp;
        recursion(0, nums, ans, temp);
        return ans;
    }
};
