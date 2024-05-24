//threshold is given
//divide array by a number- sum it and that sum should be less than or equal threshold.
//division- ceil
//maximum divisor can be- max of array and minimum can be 1-- search space
//to find- smallest divisor
// if i possible then elements to i also possible therefore we go left. i.e high=mid-1;

class Solution {
public:
    bool possible(int mid, vector<int> nums, int threshold){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            float x=float(nums[i])/mid;
            sum+=ceil(x);
        }
        if(sum<=threshold) return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int low=1;
        int high=nums[nums.size()-1];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(mid,nums,threshold)){
              
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
