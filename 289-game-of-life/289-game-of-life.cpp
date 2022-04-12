class Solution {
public:
    void gameOfLife(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                if(i-1>=0 && abs(grid[i-1][j])==1) count++;
                if(i+1<n && grid[i+1][j]==1) count++;
                if(j+1<m && abs(grid[i][j+1])==1) count++;
                if(j-1>=0 && abs(grid[i][j-1])==1) count++;
                if(i-1>=0 && j-1>=0 && abs(grid[i-1][j-1])==1) count++;
                if(i-1>=0 && j+1<m && abs(grid[i-1][j+1])==1) count++;
                if(i+1<n && j-1>=0 && abs(grid[i+1][j-1])==1) count++;
                if(i+1<n && j+1<m && abs(grid[i+1][j+1])==1) count++;
               
                if(grid[i][j]==0){
                    if(count==3) grid[i][j]=2;
                }
                else{
                    if(count<2) grid[i][j]=-1;
                    else if(count==2 || count==3) grid[i][j]=1;
                    else if(count>3) grid[i][j]=-1;
                }
            }
        }
      
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==-1)
                grid[i][j]=0;
                else if(grid[i][j]==2)
                    grid[i][j]=1;
            }
        }
    }
};