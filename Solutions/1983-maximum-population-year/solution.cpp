class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> popchange(101,0);
        for(vector<int> i:logs){
            popchange[i[0]-1950]++;  //1 person born
            popchange[i[1]-1950]--;  //1 person died
        }
        int p=0, year=2050;
        for(int i=1;i<popchange.size();i++){
            popchange[i]+=popchange[i-1];
            if(popchange[i-1]>p){
                p=popchange[i-1];
                year=i+1949;
            }
        }
        return year;
    }
};
