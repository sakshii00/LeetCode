class Solution {
public:
    static bool comp(vector<int> &v1, vector<int> &v2){
        return v1[1]<v2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //sort the array according to end time
        //if start time of next e1<=s2 then cnt++ i.e they are non-overlap --- relate with meeting rooms
        
        sort(intervals.begin(), intervals.end(),comp);
        int cnt=1;
        int prevEnd=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
           //now we compare start times with prevEnd that we have chosen
           // arr[i][0]---start time with prev end and if it is greater or equal too then its okay
            
            
            if(intervals[i][0]>=prevEnd){
                
                prevEnd=intervals[i][1];
                cout<<"prev end is "<<prevEnd<<endl;
                cnt++;
            }
        }
        
        return intervals.size()-cnt;
    }
};
