class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1) return nums.size();

        unordered_set<int> st;
        for(int i:nums){
            st.insert(i);
        }

        int longest=1;

        for(auto it:st){
            
            if(st.find(it-1)==st.end()){
                //means it is first element to count from
                int x=it;
                int cnt=1;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt++;
                }
                longest=max(longest,cnt);
            }

        }
        return longest;

    }
};
