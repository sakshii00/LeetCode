class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        for(vector<int> i:accounts){
            int s=0;
            for(int j:i){
                s+=j;
                m=max(s,m);
            }
        }
        return m;
        
    }
};
