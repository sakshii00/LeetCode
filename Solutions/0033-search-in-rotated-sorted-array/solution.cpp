class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            //find if mid is target
            if(nums[mid]==target) return mid;
            //identify if we are in sorted half or non sorted half 
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;
                }
                else low=mid+1;

            }

            else{
                if(target>=nums[mid] && target<=nums[high]){
                    low=mid+1;
                }
                else high=mid-1;
            }
                
            }
            return -1;

        }
    
};
