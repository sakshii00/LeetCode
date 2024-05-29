class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,char> vals;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            }
            else{
                if(vals.find(t[i])!=vals.end()) return false;
                else{
                    mp[s[i]]=t[i];
                    vals[t[i]]=s[i];
                }
            }
        }
        return true;
    }
};
