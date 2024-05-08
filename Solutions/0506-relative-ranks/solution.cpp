class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> arr(score.size());
        map<int,int,greater<int>> mp;
        for(int i=0;i<score.size();i++){
            mp[score[i]]=i;
        }
        // for(auto i:mp){
        //     cout<<"key: "<<i.first<<" and value: "<<i.second<<endl;
        // }
        int cnt=0;
        for(auto i=mp.begin();i!=mp.end();i++){
            if(cnt==0) arr[i->second]="Gold Medal";
            else if(cnt ==1) arr[i->second]="Silver Medal";
            else if(cnt==2) arr[i->second]="Bronze Medal";
            else{
                if(cnt){
                    int x=cnt+1;
                    arr[i->second]=to_string(x);
                }
            }
            cnt++;
        }



        
    return arr;

    }
};
