class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct=INT_MIN;
        int p=1,s=1;
        for(int i=0;i<nums.size();i++){
            if(p==0) p=1;
            if(s==0) s=1;
            p=p*nums[i];
            s=s*nums[nums.size()-i-1];
            maxproduct=max(maxproduct,max(p,s));
        }
        return maxproduct;
    }
};
