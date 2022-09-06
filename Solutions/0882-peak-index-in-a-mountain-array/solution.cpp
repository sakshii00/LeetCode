class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peak=-1;
        int s=0;
        int n=size(arr);      
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(mid<=n-2 && mid>0){
            //- one larger
                if(arr[mid-1]>arr[mid]){
                    e=mid-1;
                    mid=s+(e-s)/2;       
                }
            
            
            //+ one larger
                else if (arr[mid+1]>arr[mid]){
                    s=mid+1;
                    mid=s+(e-s)/2;
                }
                
                
                else{
                    peak=mid;
                    break;
                }
                
            }
            
            else{
                if(mid==0){
                    s=mid+1;
                    mid=s+(e-s)/2;
                }
                
                else{
                    e=mid-1;
                    mid=s+(e-s)/2;
                }
            }
        }
        return peak;
        
    }
};
