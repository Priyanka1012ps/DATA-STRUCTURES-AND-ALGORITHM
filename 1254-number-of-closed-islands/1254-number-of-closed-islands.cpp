class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int m,int n)
    {
       if(i<0 or j<0 or i>m-1 or j>n-1 or grid[i][j]!=0)
           return ;
        grid[i][j]=2;
        dfs(grid,i+1,j,m,n);
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i,j-1,m,n);
    }
    int closedIsland(vector<vector<int>>& grid)
    {
        int num=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 or i==m-1 or j==0 or j==n-1 and  grid[i][j]==0)
                {
                    
                    dfs(grid,i,j,m,n);
                    // num++;
                }
            }
        }
         
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                          num++;
                    dfs(grid,i,j,m,n);
              
                }
            
            }
         }
        return num;
        
    }
};