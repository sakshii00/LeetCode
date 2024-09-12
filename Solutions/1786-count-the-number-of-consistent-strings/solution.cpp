class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> a(26,0);
        for(char i:allowed){
            a[i-'a']=1;
        }
        int cnt=0;
        bool flag=false;
        for(string str:words){
            flag=false;
            for(char i:str){
                if(a[i-'a']==0){
                    flag=true;
                    break;
                }
                
            }
            if(!flag){
                cnt++;
            }
        }
        return cnt;
    }
};
