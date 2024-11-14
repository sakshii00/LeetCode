class Solution {
public:
    int robHelper(int idx, vector<int> &nums, vector<int> &dp){
        if(idx==0){
            return nums[idx];
        }
        
        if(idx<0){
            return 0;
        }
        
        if(dp[idx]!=-1){
            return dp[idx];
        }
        
        //take the current
        int left=nums[idx]+robHelper(idx-2, nums, dp);
        
        
        //not take the current
        int right= 0+ robHelper(idx-1, nums, dp);
        
        return dp[idx]=max(left, right);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return robHelper(nums.size()-1, nums, dp);
    }
};
