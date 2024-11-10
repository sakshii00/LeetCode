class Solution {
public:
    int maxArea(vector<int> height){
	int left=0;
	int right= height.size()-1;
	int area=0, maxArea=0;
	while(left<right){
		area=(right-left)* min(height[right], height[left]);
		maxArea=max(area, maxArea);
		if(height[left]<height[right]) {
			left++;
		}
		else{
			right--;
		}
    }
    return maxArea;
}

};
