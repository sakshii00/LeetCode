class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans={{1}};
        if(numRows==1) return ans;

        for(int r=1;r<numRows;r++){
            vector<int> rowv={1};
            for(int c=1;c<r;c++){
                rowv.emplace_back(ans[r-1][c-1]+ ans[r-1][c]);
            }
            rowv.push_back(1);
            ans.push_back(rowv);
        }
        return ans;

        
    }
};
