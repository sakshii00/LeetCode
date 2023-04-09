class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> se;
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int firstdigit;
        int i=1,j=nums.size()-1,s=0,number=0;
        for(int k=0;k<nums.size();k++){
            i=k+1;
            j=nums.size()-1;
            while(i<j){
                s=nums[k]+nums[j]+nums[i];
                if(s>0){
                    j--;
                }

                if(s<0){
                    i++;
                }

                if(s==0){
                    se.insert({nums[i],nums[j],nums[k]});
                    i++;
                    j--;
                }
            }
        }
        for(auto i:se){
            v.push_back(i);
        }
        return v;
    }
};
    

