class Solution {
public:
    void right(int s,vector<int> &arr){
        arr.push_back(-1);
        for(int i=arr.size()-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=s;
    }
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int digit;
        int s=0;
        int i=num.size()-1;
        while(k>0 || i>=0){
            digit=k%10;
            k=k/10;
            if(i>=0){
                s=num[i]+digit+s;
                if(s>9){
                    num[i]=s%10;
                    s=s/10;
                }
                else{
                    num[i]=s;
                    s=0;
                }
            }

            else{
                if(s>0){
                s+=digit;
                if(s>9){
                    right(s%10,num);
                    s=s/10;
                }
                else{
                    right(s,num);
                    s=0;
                }
                }
                else{
                    right(digit,num);
                }
            }
            i--;
        }
        if(k==0 && s>0){
            right(s,num);
        }
        return num;
        
    }
};
