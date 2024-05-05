class Solution {
public:
    int maxProfit(vector<int>& prices) {
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int mini=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            profit=max(profit,prices[i]-mini);
        }
        return profit;
    }
};
