class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string t2=to_string(x);
        string temp=to_string(x);
        reverse(temp.begin(),temp.end());
        if(t2==temp) return true;
        return false;
    }
};
