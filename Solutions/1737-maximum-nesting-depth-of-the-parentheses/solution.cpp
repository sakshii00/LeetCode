class Solution {
public:
    int maxDepth(string s) {
        int open=0, maxcnt=0;
        for(char i:s){
            if(i=='(') open++;
            maxcnt=max(maxcnt,open);
            if(i==')') open--;
        }
        return maxcnt;
    }
};
