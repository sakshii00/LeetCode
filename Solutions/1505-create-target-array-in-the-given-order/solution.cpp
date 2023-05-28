class Solution {
public:
    void right(vector<int> &arr, int shiftfrom, int index){
        for(int i=shiftfrom;i>index;i--){
            arr[i]=arr[i-1];
        }
    }
    vector<int> createTargetArray(vector<int>& nums, vector<int>& idx) {
        vector<int> target(nums.size());

        //initialise every element as -1
        for(int i=0;i<nums.size()-1;i++){
            target[i]=-1;
        }

        int index,value,j;
        for(int i=0;i<nums.size();i++){
            index=idx[i];
            value= nums[i];
            if(target[index]==-1){
                target[index]=value;
            }

            else{

                right(target,i,index);
                target[index]=value;
               
                
            }
        }
        return target;
        
    }
};
