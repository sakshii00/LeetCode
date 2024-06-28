class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int close=n;
        int open=n;
        string op="";
        vector<string> v;
        solve(open,close,v,op);

        return v;
    }

    void solve ( int open, int close, vector<string> &v, string op){
        if ( close==0 && open==0 ){
            v.push_back(op);
            return;
        }

        if (open!=0) {
            string op1=op+'(';
            solve(open-1, close, v, op1);
        }

        if(close > open) {
            string op2 = op + ')';
            solve ( open, close-1, v, op2);
        }
    }
};
