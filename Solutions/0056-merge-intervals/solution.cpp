class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        vector<int> intv;
        sort(intervals.begin(),intervals.end());
        intv=intervals[0];
        for(int v=1;v<intervals.size();v++){
            if(intervals[v][0]<=intv[1]){
                intv[1]=max(intervals[v][1],intv[1]);
                
            }
            else{
                ans.push_back(intv);
                intv=intervals[v];
            }

        }
        ans.push_back(intv);
        return ans;
    }
};
