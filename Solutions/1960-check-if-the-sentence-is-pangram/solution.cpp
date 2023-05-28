class Solution {
public:
    bool checkIfPangram(string sentence) {
        //first pass: lenght
        if(sentence.size()<26){
            return false;
        }

        int arr[26]={0};
        for(char i:sentence){
            int n=i-'a';
            arr[n]++;
        }

        for(int i:arr){
            if(i<1){
                return false;
            }
        }

        return true;
    }
};
