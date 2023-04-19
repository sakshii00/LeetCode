class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        int small=0;
        for(int i=0;i<nums.size();i++){
            small=0;
            for(int j=0;j<nums.size();j++){
              if(nums[i]>nums[j]){
                  small++;
              }
            }
            v.push_back(small);
        }
        return v;
    }
};

