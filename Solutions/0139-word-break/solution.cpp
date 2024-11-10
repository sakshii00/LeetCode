class Solution {
public:
    bool findInDict(string sub, vector<string> wordDict){
        for(string str:wordDict){
            if(str==sub) return true;
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size(),false);

        for(int i=0;i<s.size();i++){
            for(int j=0;j<=i;j++){
                string sub=s.substr(j, i-j+1);
                cout<<sub<<endl;
                if(findInDict(sub, wordDict)){
                    if(j>0) dp[i]= dp[j-1]|| dp[i];
                    else{
                        dp[i]=true;
                    }
                }
            }
        }
        return dp[s.size()-1];
    }
};
