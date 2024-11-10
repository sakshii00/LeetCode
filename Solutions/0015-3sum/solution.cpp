class Solution {
public:
    vector<vector<int>> targetSum(int first, int target, vector<int> &nums) {
    int left = first + 1;
    int right = nums.size() - 1;
    vector<vector<int>> ans;

    while (left < right) {
        int sum = nums[first] + nums[left] + nums[right];

        if (sum > target) {
            // Skip duplicates for the right pointer
            while (left < right && nums[right] == nums[right - 1]) right--;
            right--;
        } else if (sum < target) {
            // Skip duplicates for the left pointer
            while (left < right && nums[left] == nums[left + 1]) left++;
            left++;
        } else {
            ans.push_back({nums[first], nums[left], nums[right]});

            // Skip duplicates after finding a valid triplet
            while (left < right && nums[left] == nums[left + 1]) left++;
            while (left < right && nums[right] == nums[right - 1]) right--;

            left++;
            right--;
        }
    }
    return ans;
}

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int first=0;first<nums.size();first++){
            if(first>0 && nums[first]==nums[first-1]) continue;
            else{
                int target=0;
                vector<vector<int>> triplet=targetSum(first, target, nums);
                if(!triplet.empty()){
                    ans.insert(ans.end(), triplet.begin(), triplet.end());
                }
            }
        }
        return ans;
    }
};
