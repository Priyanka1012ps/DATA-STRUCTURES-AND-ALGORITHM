class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size();
        int m=maze[0].size();
        int erow=entrance[0];
        int ecol=entrance[1];
        queue<pair<pair<int,int>,int>> q;
        q.push({{erow,ecol},0});
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        vis[erow][ecol]=1;
        while(!q.empty())
        {
            auto curr=q.front();
            q.pop();
            int row=curr.first.first;
            int col=curr.first.second;
            int steps=curr.second;
            
            
            if(!(row==erow && col==ecol) && (row==0 || row==n-1 || col==0 || col==m-1))
                return steps;
            
            for(int i=0;i<4;i++)
            {
                int rw=row+delrow[i];
                int cl=col+delcol[i];
                if(rw>=0 && rw<n && cl>=0 && cl<m && vis[rw][cl]==0 && maze[rw][cl]=='.')
                {
                    q.push({{rw,cl},steps+1});
                    vis[rw][cl]=1;
                }
            }
        }
        return -1;
        
    }
};