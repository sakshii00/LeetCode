class Solution {
public:
    bool isPowerOfTwo(int n) {
        int digit=n%10;
        if(n==1){
            return true;
        }
        if(digit==2 || digit==4 || digit==6 || digit==8){
            for(int i=1;i<31;i++){
                if(pow(2,i)==n){
                    return true;
                }
            }
        }
        return false;
    }
};
