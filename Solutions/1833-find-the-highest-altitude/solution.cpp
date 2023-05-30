class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s=0;
        int m=0;
        for(int i=0;i<gain.size();i++){
            s=s+gain[i];
            m=max(s,m);
        }
        return m;
        
    }
};
