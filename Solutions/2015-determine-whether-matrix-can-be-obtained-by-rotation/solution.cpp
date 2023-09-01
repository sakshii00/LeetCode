using namespace std;
class Solution {
public:
    
    bool solve(vector<vector<int>> orig, vector<vector<int>> target,int count){

        int n=orig[0].size();
        vector<vector<int>> temp(n,vector<int> (n,0));

        int orow=0;
        int ocol=0;

        int trow=0;
        int tcol=n-1;
        while(orow<n && tcol>=0){
            while(ocol<n && trow<n){
                temp[trow][tcol]=orig[orow][ocol];
                ocol++;
                trow++;
            }
            ocol=0;
            trow=0;
            orow++;
            tcol--;
        }
        cout<<count;

        if(temp==target) return true;
        if(count==3) return false;
        return solve(temp,target,count+1);
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat[0].size();
        if(n%2!=0 && mat[n/2][n/2]!=target[n/2][n/2]) return false;
        if(mat==target) return true;
        return solve(mat,target,1);
    }
};
