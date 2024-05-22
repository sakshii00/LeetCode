class Solution {
public:

    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int low=0,high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                high=mid-1;
                mid=low+(high-low)/2;
            }
            else{
                low=mid+1;
                mid=low+(high-low)/2;
            }
        }
        return -1;
    }
};
