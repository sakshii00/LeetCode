class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string prefix=strs[0];
        string word=strs[strs.size()-1];
        string ans="\0";
        int i=0;
        while(i < prefix.size() && prefix[i]==word[i]){
            ans+=prefix[i];
            i++;
        }
        return ans;
    }
};
