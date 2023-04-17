class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int m=0;
        for(int i=0;i<candies.size();i++){
            if(m<candies[i]){
                m=max(candies[i],m);
            }
        }

        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=m){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        return v;
    }
};
