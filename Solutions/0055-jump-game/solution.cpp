class Solution {
public:
    bool canJump(vector<int>& nums) {
        //will use greedy approach 
        //so we see the intial number and then see the max index we can reach from there. the moment max index becomes > n-1 it means true
      
        int maxIndex=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxIndex) return false;
            maxIndex=max(maxIndex,i+nums[i]);
            
            
        
        }
        return true;
    }
};
