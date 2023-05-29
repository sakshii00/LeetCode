class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
       int i, match=0;
       if(ruleKey=="type") i=0;
       else if(ruleKey=="color") i=1;
       else if(ruleKey=="name") i=2;

       for(auto j: items){
           if(j[i]==ruleValue){
                    match++;
                        }
                        }

                        return match;


    }
};

