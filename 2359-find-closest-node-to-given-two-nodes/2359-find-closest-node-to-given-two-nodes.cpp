class Solution {
public:
   void dfs(int node,int level,vector<int>& edges,map<int,int>&mp,vector<int>&vis){
       vis[node] = 1;
       mp[node] = level;

       if((edges[node]!= -1) and !vis[edges[node]]){
           dfs(edges[node],level+1,edges,mp,vis);
       }
            
   }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();

        vector<int>vis1(n,0);
        vector<int>vis2(n,0);

        map<int,int>mp1;
        map<int,int>mp2;
        dfs(node1,0,edges,mp1,vis1);
        dfs(node2,0,edges,mp2,vis2);
        int ans = INT_MAX;
        int ans_node = -1;
        for(auto it:mp1){
            int node = it.first;
            int dist = it.second;
            if(mp2.find(node) != mp2.end()){
                if(ans > max(dist,mp2[node])){
                    ans = max(dist,mp2[node]);
                    ans_node = node;
                }
                
            }
        }
        return ans_node;

    }
};