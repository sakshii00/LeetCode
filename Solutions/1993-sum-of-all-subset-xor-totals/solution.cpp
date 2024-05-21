class Solution {
public:
    int rec(vector<int> nums, int idx, int currentXR){
        if(idx == nums.size()){
            return currentXR;
        }

        int include=rec(nums,idx+1,currentXR^nums[idx]);
        int exclude=rec(nums,idx+1,currentXR);
        return include+exclude;
    }
    int subsetXORSum(vector<int>& nums) {
        return rec(nums,0,0);
    }
};
