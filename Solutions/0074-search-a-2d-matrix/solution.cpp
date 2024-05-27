class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0, high=(matrix.size()*matrix[0].size())-1;
        int noCols=matrix[0].size();
        while(low<=high){
            int mid=low+(high-low)/2;
            int ridx=mid/noCols;
            int cidx=mid%noCols;
            if(matrix[ridx][cidx]==target) return true;
            else if(matrix[ridx][cidx]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};
