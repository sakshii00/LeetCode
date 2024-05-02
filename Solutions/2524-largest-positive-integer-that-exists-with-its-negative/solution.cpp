class Solution {
public:

    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());

        int i=0,j=nums.size()-1;

        if(nums[j]>0) return -1;

        while(i<j && nums[i]>0 && nums[j]<0){
            if(nums[i]==abs(nums[j])) return nums[i];

            else if(nums[i]>abs(nums[j])){
                i++;
            }

            else j--;

        }

        return -1;
    }
};
