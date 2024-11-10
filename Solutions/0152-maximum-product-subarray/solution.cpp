class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        int suffix=1;
        int maxPr=INT_MIN;
        for(int i=0;i<n;i++){
            //when it is zero we reset
            if(prefix==0){
                prefix=1;
            }
            if(suffix==0){
                suffix=1;
            }
            //we check from front
            prefix=prefix*nums[i];
            //we check from back
            suffix=suffix*nums[n-i-1];
            maxPr=max(maxPr,max(suffix, prefix));
        }
        return maxPr;
    }
};
