class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];   
            //since numbers appear twice and are same, they would cancel out leaving the one appaearing once
        }

        return x;

        
    }
};
