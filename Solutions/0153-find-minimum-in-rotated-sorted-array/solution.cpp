class Solution {
public:
    int findMin(vector<int>& nums) {
        //find the mid
        //check if mid>high i.e low is min of sorted array and we can go mid+1;
        //if mid<high that means mid is min and we can go high=mid-1;
        //keep repeating these till low>high

        int minElement=INT_MAX;
        int low=0, high=nums.size()-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[high]){
                minElement=min(minElement, nums[low]);
                low=mid+1;
            }

            else{
                //mid<high
                minElement=min(minElement,nums[mid]);
                high=mid-1;
            }
        }
        return minElement;


        //dry run
        //{4 5 6 7 8 1 2}
        //mid= 7/2= 3, 7 is mid
        //7>2? yes so that means that front part is sorted, i.e min of that is low
        //eliminate front part
        //8 1 2
        //mid=3/2=1,, 1 is mid
        //is 1<high? yes--- i.e 1,2 is sorted part and mid is the min
        //min(4,1)= minelement=1
        //eliminate and go to mid-1
        //8
        //0+0/2=0
        //mid=0
        //high would go -1


        //2 3 1
        //mid=3/2=1
        //3 is 3>1? no that means that 2 is min of thta, minelement=2
        //1
        //2+2/2=2
        //mid==high, high=1 which is less than low and it would end

        // 2 1 
        // 2/2=1
        //1>1? no

    }
};
