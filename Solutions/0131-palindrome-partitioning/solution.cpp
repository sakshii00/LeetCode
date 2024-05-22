class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> path;
        backtrack(s, 0, path, result);
        return result;
    }

private:
    void backtrack(const string& s, int idx, vector<string>& path, vector<vector<string>>& result) {
        if (idx == s.length()) {
            result.push_back(path);
            return;
        }
        for (int i = idx + 1; i <= s.length(); i++) {
            if (isPalindrome(s, idx, i - 1)) {
                path.push_back(s.substr(idx, i-idx));
                backtrack(s, i, path, result);
                path.pop_back();
            }
        }
    }

    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--]) {
                return false;
            }
        }
        return true;
    }
};
