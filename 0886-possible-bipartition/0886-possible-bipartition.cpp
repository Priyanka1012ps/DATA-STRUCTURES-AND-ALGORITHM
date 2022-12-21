class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& d)
    {
        // int n = d.size();
        vector<int>v;
        vector<int>adj[n+1];
        for(auto it:d)
        {
            v=it;
         int   u=v[0];
          int  y=v[1];
            adj[u].push_back(y);
            adj[y].push_back(u);
        }       
        if(checkBi(adj,n))
        {
            return true;
        }
        return false;
        // return 0;
    }
    bool bipartiteDfs(int node,vector<int> adj[],int color[])
    {
        if(color[node]==-1)
            color[node]=1;
        for(auto it : adj[node])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[node];
            
            if(!bipartiteDfs(it,adj,color))
            
                return false;
            
            }else if(color[it]==color[node])
                return false;
            
        }
        return true;
        }
    
  bool  checkBi(vector<int> adj[],int n)
  {
      int color[n+1];
      memset(color,-1,sizeof color);
      for(int i=0;i<n;i++)
      {
          if(color[i]==-1)
          {
              if(! bipartiteDfs(i,adj,color))
              return false;
          }
      }
      return true;
  }
};