class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //so we take the word
        //sort it 
        //add that as a key to map
        
        unordered_map<string, vector<string>> mp;
        for(string str:strs){
            //sort the string
            string temp=str;
            sort(temp.begin(), temp.end());
            //making the sorted the key and adding the word to it
            mp[temp].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto &it: mp){
            //it is a string key with vector of strings
            ans.push_back(it.second);
            
        }
        return ans;
    }
};
