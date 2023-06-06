class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int m=0;
        for(int i:nums){
            if((i<=9999 && i>999) || (i<=99 && i>9) || i==100000){
                m++;
            }
        }
        return m;
    }
};
