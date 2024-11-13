class Solution {
public:
    int coinChangeHelper(int idx, vector<int> &coins, int amount, vector<vector<int>> &dp){
        if(idx==0){
            if(amount%coins[idx]==0){
                return amount/coins[idx];
            }
            return 1e9;
        }
        if(dp[idx][amount]!=-1){
            return dp[idx][amount];
        }
        int left=INT_MAX;
        if(amount>=coins[idx]){
            //pick condition
            left=1+coinChangeHelper(idx, coins, amount-coins[idx], dp);
        }
        int right=0+coinChangeHelper(idx-1, coins, amount, dp);
        return dp[idx][amount]=min(left, right);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(), vector<int> (amount+1, -1));
        if(amount==0) return 0;
        int ans=coinChangeHelper(coins.size()-1, coins, amount, dp);
        return ans==1e9?-1:ans;
    
    }
};
