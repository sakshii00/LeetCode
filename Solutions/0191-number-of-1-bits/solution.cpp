class Solution {
public:
    int hammingWeight(int n) {
        int temp=n;
        int cnt=0;
        while(temp!=0){
            int bit=temp&1;
            temp=temp>>1;
            if(bit==1) cnt++;
        }
        return cnt;
    }
};
