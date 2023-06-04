class Solution {
public:
vector<vector<int>> updaterow(vector<vector<int>> &arr,vector<int> index,int col,int row){
        for(int k=0;k<col;k++){
            arr[index[0]][k]++;
        }

        for(int k=0;k<row;k++){
            arr[k][index[1]]++;
        }
        return arr;
    }
    int oddCells(int m, int n, vector<vector<int>>& indices) {

    
        int s=0;
        vector<vector<int>> arr(m, vector<int> (n, 0));
        for(auto i:indices){
            updaterow(arr,i,n,m);
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if( arr[i][j] %2!=0){
                    s++;
                }
            }
        }
        return s;

    }
    
};
