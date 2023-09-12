class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> v;
        for(auto i:matrix){
            int colidx=0;
            int mini=i[0];
            for(int j=1;j<matrix[0].size();j++){
                mini=min(i[j],mini);
                if (mini==i[j]) colidx=j;
            }
            cout<<"mini "<<mini<<endl;
            int maxi=matrix[0][colidx];
            int rowidx=0;
            for(int k=1;k<matrix.size();k++){
                maxi=max(matrix[k][colidx],maxi);
                if(maxi==matrix[k][colidx]) rowidx=k;
            }
            cout<<"maxi "<<maxi<<endl;
            if(maxi==mini){
                v.push_back(matrix[rowidx][colidx]);
            }
        }
        return v;
    }
};
