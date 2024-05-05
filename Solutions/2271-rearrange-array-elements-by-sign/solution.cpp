class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v(nums.size());
        int o=1,e=0;
        for(int i:nums){
            if(i>0){
                v[e]=i;
                e+=2;
            }

            else{
                v[o]=i;
                o+=2;
            }
        }
        return v;
    }

};
