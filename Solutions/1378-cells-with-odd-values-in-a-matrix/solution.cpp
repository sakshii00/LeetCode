class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> r(m,0);
        vector<int> c(n,0);
        for(auto i:indices){
            r[i[0]]++;
            c[i[1]]++;
        }

        int ans=0;
        for(int i:r){
            for(int j:c){
                if((i+j)%2!=0){
                    ans++;
                }
            }
        }
        return ans;
        
    }
};
