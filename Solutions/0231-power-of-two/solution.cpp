class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool w=false;
        if (n==1){
            w=true;
        }
        else if (((n%10)==2) || ((n%10)==4) || ((n%10)==8) || ((n%10)==6)){
            int temp=n;
            w=true;
            while(temp){
                if (temp%2==0){
                    temp=temp/2;
                    if(temp==1){
                        w=true;
                        break;
                    }
                }
                else{
                    w=false;
                    break;
                }
                
            }
        }
        else{
            w=false;
        }
    return w;    
    }
};
