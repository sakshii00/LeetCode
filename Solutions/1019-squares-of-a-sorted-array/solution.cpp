class Solution {
public:

    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> n2;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])) {
                n2.push_back(nums[i]*nums[i]);
                i++;
            }

            else if (abs(nums[i])==abs(nums[j])) {
                if(i==j) n2.push_back(nums[i]*nums[i]);
                else{
                    n2.push_back(nums[i]*nums[i]);
                    n2.push_back(nums[j]*nums[j]);
                }
                i++;
                j--;
            }

            else{
                n2.push_back(nums[j]*nums[j]);
                j--;
            }
            
        }
        reverse(n2.begin(),n2.end());
        return n2;
    }
};
