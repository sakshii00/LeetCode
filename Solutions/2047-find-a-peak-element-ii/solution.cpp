//we try to start from middle column, find max element in that col and then check if it is peak, if it is good else we use binary search to go to columns towards right or left
//if element on left is greater that means that mid is on decreasing side high=mid-1 else low=mid+1;

class Solution {
public:
    int maxel(int col, vector<vector<int>> mat){
        int maxi=-1;
        int idx=-1;
        for(int i=0;i<mat.size();i++){
            if(maxi<mat[i][col]){
                maxi=mat[i][col];
                idx=i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0, high=mat[0].size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int r=maxel(mid, mat);
            int left=mid-1>=0?mat[r][mid-1]:-1;
            int right=mid+1<mat[0].size()?mat[r][mid+1]:-1;
            if(mat[r][mid]> left  && mat[r][mid]> right ) return {r,mid};
            else if(mat[r][mid] < left ) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};
