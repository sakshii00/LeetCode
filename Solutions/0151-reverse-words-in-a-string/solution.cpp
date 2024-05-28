class Solution {
public:
    string reverseWords(string s) {
        string result="\0";
        int i=0;
        while(i<s.size()){
            while(i<s.size() && s[i]==' ') i++;
            if(i>=s.size()) break;
            int j=i+1;
            while(j<s.size() && s[j]!=' ') j++;
            //j would reach at a point where it is space thats why we take substring.
            string sub=s.substr(i,j-i);
            if(result.empty()) result=sub;
            else result=sub+" "+result;
            i=j+1;
        }
        return result;
    }
};
