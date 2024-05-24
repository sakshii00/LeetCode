class Solution {
public:
    bool totalhours(int mid, vector<int> arr, int h){
        int t=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%mid==0){
                t+=arr[i]/mid;
            }
            else{
                t+=arr[i]/mid + 1;
            }
            if(t>h) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int low=1;
        int high=piles[piles.size()-1];
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(totalhours(mid, piles, h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

    }
};
