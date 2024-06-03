class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1) return s;

        int maxlength=0,len=0;
        string ans;
        for(int i=0;i<s.size();i++){
            int j=i;
            int k=i;
            
            while(k>=0 && j<s.size() && s[j++]==s[k--]){
                len=j-k-1;
                
                if(len>maxlength){
                    ans=s.substr(k+1,len);
                    maxlength=len;
                }
            }
            j=i,k=i+1;
            while(k>=0 && j<s.size() && s[j++]==s[k--]){
                len=j-k-1;
                if(len>maxlength){
                    ans=s.substr(k+1,len);
                    maxlength=len;
                }
            }
            }
            
        return ans;
        }
        
    
};
