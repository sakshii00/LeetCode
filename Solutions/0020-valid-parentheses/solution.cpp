class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto symbol:s){
            if(symbol=='(' || symbol=='{' || symbol=='['){
                st.push(symbol);
            }
            else{
                char t;
                if(!st.empty()){
                    t=st.top();
                }
                else{
                    t='.';
                }
                if(symbol==')' && t=='(') st.pop();
                else if (symbol=='}' && t=='{') st.pop();
                else if(symbol==']' && t=='[') st.pop();
                else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
