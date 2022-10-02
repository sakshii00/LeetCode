class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int it,temp;
        while(i<=j){
            if(nums[i]==0){
                it=j;
                temp=nums[it];
                nums[j]=0;
                while(it>i){
                    swap(temp,nums[--it]);
                }
                j--;
                i=0; 
            }
            else{
                i++;
            }
        }
    }
};
