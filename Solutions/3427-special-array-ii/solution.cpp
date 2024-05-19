class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> sameParity(nums.size(),0);
        vector<bool> ans;
        //adding 1 whereever condition is false
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]%2==0 && nums[i]%2==0 || nums[i-1]%2!=0 && nums[i]%2!=0){
                sameParity[i]=1;
            }
        }

        //finding number of falses till that idx
        for(int i=1;i<sameParity.size();i++){
            sameParity[i]+=sameParity[i-1];
        }

        for(int i:sameParity){
            cout<<i<<" ";
        }

        //if number of falses dont increase from the to and till in the query that means that the condition is true else it is false.
        for(int i=0;i<queries.size();i++){
            if(sameParity[queries[i][0]]!=sameParity[queries[i][1]]){
                ans.emplace_back(false);
            }
            else{
                ans.emplace_back(true);
            }
        }
        return ans;

    }
};
