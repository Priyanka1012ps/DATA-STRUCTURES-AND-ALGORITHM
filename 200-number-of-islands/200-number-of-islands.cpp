class Solution {
public:
    
         void dfs(vector<vector<char>>& grid,int i,int j,int m,int n)
    {
        if(i<0 || i>m-1 || j<0 || j>n-1 || grid[i][j]!='1')
            return  ;
        grid[i][j]='2';
        dfs(grid,i-1,j,m,n);
        dfs(grid,i+1,j,m,n);
        dfs(grid,i,j-1,m,n);
        dfs(grid,i,j+1,m,n);
    }
   int numIslands(vector<vector<char>>& grid) 
    {
        int num=0;
        int m=grid.size();
        int n=grid[0].size();
       if (m==0)
           return 0;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        
        if(  grid[i][j]=='1')
        {
              num=num+1;
            dfs(grid,i,j,m,n);
          
        }
                
        
    }
}
//         for(int i=0;i<m;i++)
//       {
//     for(int j=0;j<n;j++)
//     {
//         if(grid[i][j]==1)
        
//           num++;
        
//     }
//     }
            return num;
        
    }
        
    
};