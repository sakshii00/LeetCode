//we find the missing numbers till that number by subtracting what should have been there from what is there.
//if the missing number is less than k that means ki our number won't be there in nums before that one
//when it is just greater, we see num before and add how much more we need to it.
//when we reach the index, we use formula to get our ans

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0, high=arr.size()-1;
        int mid,miss;
        while(low<=high){
            mid=low+(high-low)/2;
            miss=arr[mid]-(mid+1);
            if(miss<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low+k;
        
    }
};
