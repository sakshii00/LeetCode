class Solution {
public:
    int bitwiseComplement(int n) {
        int d;
        int ans=0;
        int i=0;
        if(n==0){
            return 1;
        }
        while(n){
            d=n&1;
            n=n>>1;
            d=!d;
            ans=ans+(pow(2,i)*d);
            i++;
        }

        return ans;
    }
};
