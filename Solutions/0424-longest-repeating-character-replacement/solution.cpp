class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq=0;
        int maxLength=0;
        int length=0;
        int left=0, right=0;
        unordered_map<char, int> mp;
        while(right<s.size()){
            mp[s[right]]++;
            maxfreq=max(maxfreq, mp[s[right]]);
            length++;
            int conversions=length-maxfreq; //this is the number of conversions i'd have to do to keep that string.
            if(conversions>k){
                mp[s[left]]--;
                length--;
                
                left++;   
            }
            right++;
            maxLength=max(length, maxLength);
        }
        return maxLength;
        
    }
};
