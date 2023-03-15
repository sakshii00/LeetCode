class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        left.push_back(nums[0]);
        int i=left[0];
        for(int k=1;k<nums.size();k++){
            if(nums[k]<i){
                for(int j=0;j<right.size();j++){
                    left.push_back(right[j]);
                    if(right[j]>i){
                        i=right[j];
                    }
                }
                right.clear();
                left.push_back(nums[k]);
            }

            else{
                right.push_back(nums[k]);
            }

            
        }
        return left.size();
    }
};
