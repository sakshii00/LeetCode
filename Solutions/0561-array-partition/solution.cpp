class Solution {
public:
    int arrayPairSum(vector<int>& num) {
        int s=0;
        sort(num.begin(),num.end());
        for(int i=0;i<num.size()-1;i+=2){
            s+=num[i];
        }
        return s;
    }
    
};
