class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> mp;
        priority_queue<pair<int,char>> freq;
        for(char i:s){
            mp[i]++;
        }
        for(auto i:mp){
            freq.push(make_pair(i.second,i.first));
        }
        s="";
        while(!freq.empty()){
            pair<int, char> p=freq.top();
            freq.pop();
            s+=string(p.first,p.second);
        }
        return s;
    }
};
