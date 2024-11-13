class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        
        vector<vector<int>> dp(rows, vector<int> (cols,0));
        
        dp[0][0]=grid[0][0];
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(i==0 && j==0) continue;
                int left=INT_MAX;
                int up=INT_MAX;
                
                if(j>0) left=grid[i][j]+dp[i][j-1];
                if(i>0) up=grid[i][j]+dp[i-1][j];
                dp[i][j]=min(left, up);
            }
        }

        return dp[rows-1][cols-1];
    }


    
};
