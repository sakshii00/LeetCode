class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int st, int dest) {
        int biggeri, smalleri,leftsum=0,rightsum=0;
        int diff=abs(dest-st);
        int n=distance.size()-1;
        if((dest==n) && st==0){
            leftsum=distance[dest];
            for(int i=0;i<dest;i++){
                rightsum+=distance[i];
            }
            return min(leftsum,rightsum);

        }
        if (dest>st){
            biggeri=dest;
            smalleri=st;
        }
        
        else{
            smalleri=dest;
            biggeri=st;
        }

        //right
        for(int i=smalleri;i<biggeri;i++){
            rightsum+=distance[i];
        }

        //left
        for(int i=smalleri-1;i>=0;i--){
            leftsum+=distance[i];
        }

        for(int i=biggeri; i<distance.size();i++){
            leftsum+=distance[i];
        }

        /*int i=distance.size()-1;
        while(distance[i]!=distance[biggeri]){
            leftsum+=distance[i];
            i--;
        }*/

        int ans=min(leftsum,rightsum);
        return ans;
    }
};
