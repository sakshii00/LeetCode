class Solution {
public:
    vector<int> reverse(vector<int> &arr){
        int i=0,j=arr.size()-1;
        while(i<=j){
            swap(arr[i],arr[j]);
            arr[i]=arr[i]^1;
            arr[j]=arr[j]^1;
            if(i==j){
                arr[i]=arr[i]^1;
            }
            i++;
            j--;
        }
        return arr;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            image[i]=reverse(image[i]);
        }
        return image;
    }
};
