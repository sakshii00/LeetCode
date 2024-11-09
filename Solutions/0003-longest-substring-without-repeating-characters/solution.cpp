class Solution {
public:
    int lengthOfLongestSubstring(string s){
        if(s=="") return 0;
	int i=0;
	int j=i+1;
	unordered_map<char, int> seen;
	seen[s[i]]=i;
	int length=0;
	int maxLength=1;
	while(j<s.size()){
		if(seen.find(s[j])==seen.end() || seen[s[j]]<i){
			//make that in map
            length=j-i+1;
            maxLength=max(length, maxLength);
			seen[s[j]]=j;
			j++;
		}
		else{
			i=seen[s[j]];
			i+=1;
			seen[s[j]]=j;
			j++;
			
		}
	}
	return maxLength;	
}



};
