class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int cnt=0;
        int j=0,i=people.size()-1;
        while(i>=j){
            if(people[i]==limit){
                cnt++;
                i--;
            }
            else{
                if(i==j){
                    cnt++;
                    break;
                }
                else if((people[i]+people[j])<=limit){
                    cnt++;
                    i--;
                    j++;
                  
                }

                else{
                    cnt++;
                    i--;
                }

            }
        }
        return cnt;
    }
};
