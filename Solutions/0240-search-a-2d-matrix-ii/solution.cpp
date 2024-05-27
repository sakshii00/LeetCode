class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c=matrix[0].size()-1;
        int r=0;
        while(r<matrix.size() && c>=0){
        if(target==matrix[r][c]) return true;
        else if(target>matrix[r][c]) r++;
        else c--;
        }
        return false;
    }
};
