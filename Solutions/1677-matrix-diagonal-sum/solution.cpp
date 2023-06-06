class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0;
        int m=mat[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(i==j || ((i+j)==(m-1))){
                    s+=mat[i][j];
                }  
            }
        }
        return s;
    }
};
