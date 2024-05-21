class Solution {
public:
    int mergeSort(vector<int> &arr, int low, int high){
        int cnt=0;
        if(low>=high) return cnt;
        int mid=(low+high)/2;
        cnt+=mergeSort(arr,low,mid);
        cnt+=mergeSort(arr,mid+1,high);
        cnt+=cntp(arr,low,mid,high);
        merge(arr,low,mid,high);
        return cnt;
    }

    void merge(vector<int> &arr, int low, int mid, int high){
        vector<int> temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }

        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }

        //putting it in.
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }

    int cntp(vector<int> &arr, int low, int mid, int high){
        int i=low;
        int j=mid+1;
        int cnt=0;
        for(i;i<=mid;i++){
            while(j<=high && arr[i]>(long long)2*(long long)arr[j]){
                j++;
            }
            cnt=cnt+(j-(mid+1));
        }
        return cnt;
    }
    int team(vector<int> &skill, int n){
        return mergeSort(skill,0,n-1);
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return team(nums,n);
    }
};
