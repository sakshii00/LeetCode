class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int cnt=0;
        int n=happiness.size();
        sort(happiness.begin(),happiness.end(),greater<int>());
        int sub=0;long long s=0;
        for(int i=0;i<k;i++){
            happiness[i]-=sub;
            if(happiness[i]>0){
            s+=happiness[i];
            }
            sub++;
        }
        
        return s;
    }
};
