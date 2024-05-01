class Solution {
public:
    void rev(string &word, int idx){
        int i=0;
        while(i<idx){
            swap(word[i++],word[idx--]);
            
        }
    }
    string reversePrefix(string word, char ch) {
        int idx=word.find(ch);
        if(idx==-1) return word;

        rev(word,idx);
        return word;
    }
};
