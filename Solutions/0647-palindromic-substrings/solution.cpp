class Solution {
public:
    int isPalindrome(int center1, int center2, string s){
        int left=center1;
        int right=center2;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }

        return right-left-1;

    }

    int countSubstrings(string s) {
        int cnt=1;
        for(int i=1;i<s.size();i++){
            cnt+=(isPalindrome(i, i, s)/2) +1;
            if(s[i]==s[i-1]){
            cnt+=(isPalindrome(i-1, i, s)/2);
            }
        }
        return cnt;
    }
};
