class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int c=matrix[0].size();
        int r=matrix.size();
        vector<vector<int>> mat(c,vector<int> (r));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mat[j][i]=matrix[i][j];
            }
        }
        return mat;
    }
};
