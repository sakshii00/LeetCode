class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {\
        int i=0,j=0;
        vector<int> v;
        //int s=max(nums1.size(),nums2.size());
        while(j<nums2.size() && i<nums1.size()){
            if(nums1[i]>nums2[j]){
                v.push_back(nums2[j]);
                j++;
            }

            else if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }

            else if(nums1[i]==nums2[j]){
                v.push_back(nums1[i]);
                v.push_back(nums2[j]);
                i++;
                j++;
            }
        }

        while(i<nums1.size()){
            v.push_back(nums1[i]);
            i++;
        }

        while(j<nums2.size()){
            v.push_back(nums2[j]);
            j++;
        }

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }


        double median;
        int size=v.size();
        if(size%2==0){
            median=(v[(size-1)/2]+v[size/2])/2.0;
        }

        else{
            median=v[size/2];
        }

        return median;
        
    }
};
