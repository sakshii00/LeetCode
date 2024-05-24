//weights array
//we add more weight in order -- max cap of ship
//least weight cap -- days
//decide the cap(min) of ship to ship in days 
//max cap-- sum of all elements of array 
//min can be - min of array 
//search space will be from min of array to sum of all
//mid-- we will see how many we can sum to add till mid again and again and if the days are equal to days then ans.
//if days are more, then we need to inc capcaity i.e low=mid+1
//else high=mid-1;

class Solution {
public:
    int caldays(int mid, vector<int> weights, int days){
        int cnt=1, sum=0;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]>mid){
                sum=weights[i];
                cnt++;
            }
            else{
                sum+=weights[i];
            }
        }
        return cnt;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int d=caldays(mid,weights,days);
            if(d<=days){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;

    }
};
