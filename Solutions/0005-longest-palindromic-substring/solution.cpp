class Solution {
public:
  
string Palindrome(int center1, int center2, const string &s) {
    int left = center1;
    int right = center2;
    
    // Expand as long as the characters are equal and within bounds
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }

    // Return the valid palindrome substring
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(const string &s) {
    string ans = "";
    
    // Iterate through each character to consider both even and odd length palindromes
    for (int i = 0; i < s.size(); i++) {
        // Check for even-length palindrome
        string even = Palindrome(i, i + 1, s);

        // Check for odd-length palindrome
        string odd = Palindrome(i, i, s);

        // Determine the longer palindrome between even and odd cases
        string add = (odd.size() > even.size()) ? odd : even;
        
        // Update the answer if we find a longer palindrome
        if (add.size() > ans.size()) {
            ans = add;
        }
    }
    
    return ans;
}

};
