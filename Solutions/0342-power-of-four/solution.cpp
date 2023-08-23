class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;

        int digit=n%10;
        if(digit==4 || digit==6){
            for(int i=1;i<=15;i++){
                if(pow(4,i)==n) return true;
            }
        }
        return false;
    }
};
