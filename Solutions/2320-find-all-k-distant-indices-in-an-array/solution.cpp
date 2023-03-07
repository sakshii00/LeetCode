
class Solution {
public:

    int FindKeyIndex(int key, vector<int> arr, int index){
        for(int i=index;i<arr.size();i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int j=FindKeyIndex(key,nums,0);
        set<int> values;
        while(j!=-1){
            for(int i=0;i<nums.size();i++){
                if(abs(i-j)<=k){
                    values.insert(i);
                    values.insert(j);
                }
            }
                 j=FindKeyIndex(key,nums,j+1);
                 
        }

        vector<int> ans;
        for(auto i:values){
            ans.push_back(i);
        }
        
        return ans;
    }
};
