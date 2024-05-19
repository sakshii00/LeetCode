class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1) return true;
        bool f=false;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i-1]%2!=0){
                f=true;
            }
            else if(nums[i-1]%2==0 && nums[i]%2!=0){
                f=true;
            }
            else{
                f=false;
                break;
            }
        
        }
        return f;
        
    }
};
