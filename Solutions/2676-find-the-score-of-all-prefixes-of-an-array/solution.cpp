class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int m=0;
        long long s=0;
        vector<long long> v;
        for(int i=0;i<nums.size();i++){
            m=max(m,nums[i]);
            s=nums[i]+m+s;
            v.push_back(s);
        }

        return v;
        
    }
};
