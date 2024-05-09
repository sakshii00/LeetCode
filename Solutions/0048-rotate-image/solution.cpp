class Solution {
public:
        void transpose(vector<vector<int>> &mat){
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
    }

    // void rev(vector<int> &arr){
    //     int i=0,n=arr.size();
    //     for(int i=0;i<n/2;i++){
    //         swap(arr[i],arr[n-i-1]);
    //     }
    // }

    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        int m=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<m/2;j++){
                swap(matrix[i][j],matrix[i][m-j-1]);
            }
        }
    }
};
