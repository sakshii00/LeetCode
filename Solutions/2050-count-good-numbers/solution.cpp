class Solution {
public:
    long long mypow(long long x, long long n){
        if(n==0) return 1;
        long long ans=mypow(x, n/2);
        ans*=ans;
        ans%=1000000007;
        if(n%2) ans*=x;
        ans%=1000000007;
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long even=n/2+n%2;
        long long ans=mypow(4, odd)*mypow(5,even)%1000000007;
        
        return ans;

    }
};
