class Solution {
public:
    
    vector<int> merge(vector<int> interval1, vector<int> interval2){
        int start=min(interval1[0], interval2[0]);
        int end=max(interval1[1], interval2[1]);
        return {start, end};
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        //if the end time taken before is more than start time of next, then its okay
        //otherwise merge
        int end=intervals[0][1];
        
        vector<vector<int>> ans;
        
        ans.push_back(intervals[0]);
        
        for(int idx=1;idx<intervals.size();idx++){
            if(end<intervals[idx][0]){
                ans.push_back(intervals[idx]);
                end=intervals[idx][1];
                //update end time too
            }
            else{
                vector<int> interval1=ans.back();
                ans.pop_back();
                
                //we take one of the intervals that we previously added and the one we have initially
                //we merge it based on (min[starts], max[ends]);
                vector<int> m=merge(interval1, intervals[idx]);
                end=max(end, intervals[idx][1]);
                ans.push_back(m);
            }
        }
        
        return ans;
    }
};
