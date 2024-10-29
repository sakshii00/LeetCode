class Solution {
public:
    void recursion(int idx, int target, int k, vector<int> &temp, vector<vector<int>> &ans){

        if(temp.size()==k){
            if(target==0){
                ans.push_back(temp);
                return;
            }
            else{
                return;
            }
        }

        if(idx>9){
            return;
        }
       
        for(int i=idx;i<10;i++){
            if(i>target) continue;
            temp.push_back(i);
            
            recursion(i+1, target-i, k, temp, ans);
        
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        //go till recursion end and see if it adds upto sum.
        vector<int> temp={};
        vector<vector<int>> ans;
     
        recursion(1, n, k, temp, ans);
        return ans;
        
    }
};
