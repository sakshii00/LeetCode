class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int n=nums.size();
        int SumNNumbers=(n*(n+1))/2;
        return SumNNumbers-sum;
        
    }
};
