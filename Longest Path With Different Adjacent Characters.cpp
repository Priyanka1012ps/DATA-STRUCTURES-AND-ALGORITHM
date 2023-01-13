class Solution {
public:
      int dfs(int curr,int parent,string &s,vector<vector<int>>&adj,int &ans)
      {
          int tempLarge =0;
          int finalValue=0;

          for(int i:adj[curr])
          {
              int nodeRes = dfs(i,curr,s,adj,ans);
              if(s[i] == s[curr])continue;
              if(nodeRes > tempLarge)
              {
                  tempLarge = nodeRes;
              }
              if(tempLarge > finalValue)
              {
                  swap(tempLarge,finalValue);
              }
          }
          ans = max(ans,tempLarge+finalValue+1);
          return 1+finalValue;
      }
    int longestPath(vector<int>& parent, string s) {
        int  n  = parent.size();

        vector<vector<int>> adj(n,vector<int>());

        for(int i=1;i<parent.size();i++)
        {
            adj[parent[i]].push_back(i);
        }
        int ans=1;
        dfs(0,-1,s,adj,ans);
        return ans;
    }
};
