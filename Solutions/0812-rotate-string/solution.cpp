class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        if(s.length()==1 && goal.length()==1 || s==goal) return true;

        for(int i=s.size();i>=0;i--){
            if(goal[i]==s[0]){
                // cout<<goal.substr(i,i)<<endl;
                // cout<<s.substr(0,i-1)<<endl;
                int shifts=s.size()-i;
                if(goal.substr(i,shifts)==s.substr(0,shifts)){
                    if(goal.substr(0,i)==s.substr(shifts,s.size()-shifts)) return true;
                }
            }
        }
        return false;
           
    }
};
