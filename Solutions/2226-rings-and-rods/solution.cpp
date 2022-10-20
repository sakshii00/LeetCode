class Solution {
public:
    
    int funct(char ch,string s){
        int ans=0;
        int b=0,g=0,r=0;
        for(int i=1;i<s.size();i+=2){
            if(s[i]==ch){
                
                if(s[i-1]=='B'){
                    b++;
                    
                }
                else if(s[i-1]=='R'){
                    r++;
                }
                else if(s[i-1]=='G'){
                    g++;
                }
            }
        }
        if(r>0 && b>0 && g>0){
            ans++;
        }
        
        return ans;

        
    }
    int countPoints(string rings) {
        char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
        int x=0;
        for(char i:arr){
            x+=funct(i,rings);
        }

        return x;
    }
};
