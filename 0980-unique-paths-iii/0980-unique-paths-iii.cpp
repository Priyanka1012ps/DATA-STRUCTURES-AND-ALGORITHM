class Solution {
public:
    int m,n;
    int zeros=1 , paths=0;
    int x[4]={1,0,0,-1};
    int y[4]={0,1,-1,0};

    int uniquePathsIII(vector<vector<int>>& grid) {
        m=size(grid);
        n=size(grid[0]);
        vector<vector<int>> dp(m,vector<int>(n,0));
        int x,y;
        
        for(int i=0;i<m;i++)
          for(int j=0;j<n;j++){
            if(grid[i][j]==0)
              zeros++; 
            else if(grid[i][j]==1){
              x=i;
              y=j;  
            } 
            else if(grid[i][j]==-1)
              dp[i][j]=1;   
        } 
        
        funDFS(grid,dp,x,y);
        return paths;
    }

    void funDFS(vector<vector<int>>& g,vector<vector<int>>& dp,int i,int j){
        
        if(i<0 || i>=m || j<0 || j>=n || dp[i][j] || g[i][j]==-1)
          return;

        if(!zeros && g[i][j]==2){
          paths++;
          return;  
        }
        
        for(int k=0;k<4;k++){
         zeros-=1;
         dp[i][j]=1;

         funDFS(g,dp,i+x[k],j+y[k]);
         
         dp[i][j]=0;
         zeros++;
        }

    } 
};