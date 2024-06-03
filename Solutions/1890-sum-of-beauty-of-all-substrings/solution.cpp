class Solution {
public:
    int beautySum(string s) {
       int beautysum= 0;

    for(int i=0; i<s.length(); i++){

        vector<int> arr(26, 0);

        for(int j=i; j<s.length(); j++){

            int curr = s[j] - 'a';

            arr[curr]++;

            int max = INT_MIN;

            int min = INT_MAX;

            for(int k=0; k<26; k++){

                if(arr[k]>0){

                    if(arr[k] > max){

                        max = arr[k];

                    }

                    if(arr[k] < min){

                        min = arr[k];

                    }

                }

            }

            beautysum += max - min;

        }

    }

    return beautysum;
    }
};
