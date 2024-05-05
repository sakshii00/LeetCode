class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        int maxsum=nums[0],sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};
