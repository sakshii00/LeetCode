class Solution {
public:
    int possible(int mid, vector<int> nums){
        int cntpainter=1, area=nums[0];
        for(int i=1;i<nums.size();i++){
        if(area+nums[i]<=mid){
            area+=nums[i];
        }
        else{
            cntpainter++;
            area=nums[i];
        }
        }
        return cntpainter;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(mid,nums)<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};
