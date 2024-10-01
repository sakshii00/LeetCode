class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        //first do modulous of each element
        //then sort that array
        //for 0 u need 0 only
        //so for 0 count pairs from beg
        //for rest add pointer from front and back, 1 would need n-1 remainder

        std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

        for(int i=0;i<arr.size();i++){
            arr[i]=arr[i]%k;
            if(arr[i]<0){
                arr[i]+=k;
            }
        }

        sort(arr.begin(),arr.end());

        int i=0;
        int j=arr.size()-1;
        while(i<arr.size() && arr[i]==0){
            i++;
        }

        if((i-1)%2==0 ) return false; //seeing if pairs of 0 exist

        while(i<arr.size() && j>=0 && i!=j){
            if((arr[i]+arr[j])!=k){
                return false;
            }
            i++;
            j--;
        }
        if(i==j) return false; //cases where there is 1 zero and 1 
        return true;
    }
};
