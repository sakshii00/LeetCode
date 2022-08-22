class Solution {
public:
    int bitwiseComplement(int n) {
        int num=0;
        int i=0;
        
        if (n==0){
            num=1;
        }
        while(n){
            int bit=!(n&1);
            n=n>>1;
            num=(pow(2,i)*bit)+num;
            i++;
        }
        return num;
        
    }
};
