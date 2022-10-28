class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
vector<vector<string>> ans;
    int n=strs.size();
    map<string,vector<string>>m;
    for(int i=0;i<n;i++)
    {
        string str=strs[i];
        sort(strs[i].begin(),strs[i].end());
        m[strs[i]].push_back(str);
    }
    for(auto it:m)
    {
        ans.push_back(it.second);
    }
    return ans;
}
    
};