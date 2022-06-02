class Solution {
public:
    int checkCycle(int node ,vector<vector<int>>& graph ,vector<bool> &vis, vector<bool> &dfsVis,vector<bool>&present_cycle)
  {
      vis[node]=true;
      dfsVis[node]=true;
      for(auto it : graph[node])
      {
          if(!vis[it])
          {
           if((checkCycle(it,graph,vis,dfsVis,present_cycle)))
               return present_cycle[node]=true ;
          }
      
          else if( vis[it] && dfsVis[it]  )
          {
              return present_cycle[node]=true ;
          }
      }
       dfsVis[node]=0;
      return false;
      
      }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool>vis(n,false),dfsVis(n,false);
        vector<int>adj[n];
        vector<int>v;
        vector<int>ans;
          vector<bool>present_cycle(n,false);
        // for(auto it : graph)
        // {
        //     v=it;
        //     int u=v[0];
        //    int  y=v[1];
        //     adj[u].push_back(y);
        // }
            // int vis[n],dfsVis[n];
            // memset(vis,0,sizeof(vis));
            // memset(dfsVis,0,sizeof(dfsVis));
            for(int i=0;i<n;i++)
            {
                if(!vis[i])
                
                     checkCycle(i,graph,vis,dfsVis,present_cycle);
                   
            }
           
        
        for(int i=0 ; i<n ;i++)
        {
            if(!present_cycle[i])
            {
                ans.push_back(i);
            }
        }
 return ans;
        
}
       
};