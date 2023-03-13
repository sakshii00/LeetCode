class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=abs(nums[0]);
        int index;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])<=mini){
                mini=abs(nums[i]);
                index=i;
            }
        }
        return nums[index];
        
    }
};
