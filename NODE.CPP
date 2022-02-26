class Solution {
public:
    int shortestPathLength(vector<vector<int>>& g) {
        int fs=(1<<g.size())-1;  
        queue<pair<int,int>> q;
        for(int i=0;i<g.size();i++){
            q.push({i,1<<i});
        }
        vector<vector<int>> v(g.size(),vector<int>(fs+1,0));
        int c=0;
        while(!q.empty()){
            int s=q.size();
            while(s--){
                pair<int,int> t=q.front();
                if(t.second==fs)return c;
                q.pop();
                for(int i=0;i<g[t.first].size();i++){
                    int temp=t.second|1<<g[t.first][i];
                    if(v[g[t.first][i]][temp]==0){
                        v[g[t.first][i]][temp]=1;
                        q.push({g[t.first][i],temp});
                    }
                }
            }
            c++;
        }
        return 0;
    }
};
