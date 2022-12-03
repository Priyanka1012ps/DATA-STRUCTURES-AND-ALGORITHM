class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;  string ans="";  vector<pair<int,char>>vec;
    
    for(int i=0;i<s.length();i++)  mp[s[i]]++;

    for(auto i : mp)  vec.push_back({i.second,i.first});
    
    sort(vec.begin(),vec.end());
    
    reverse(vec.begin(),vec.end());
    
    for(int i=0;i<vec.size();i++)
        while(vec[i].first)
        {
            ans+=vec[i].second;
            vec[i].first--;
        }
    
    return ans; 
    }
};