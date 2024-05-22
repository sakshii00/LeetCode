class Solution {
public:
    //lower bound of array is an element that is equal to or just greater than array
    int lowerbound(vector<int> &nums, int target){
        int low=0,high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int upperbound(vector<int> &nums, int target){
        int low=0,high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lowerbound(nums,target);
        if(nums.size()==0) return {-1,-1};
        else if(lb==nums.size() || nums[lb]!=target) return {-1,-1};
        else return {lb,upperbound(nums,target)-1};
    }
};
