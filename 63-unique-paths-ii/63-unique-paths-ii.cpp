class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
           int m = v.size();
           int n = v[0].size();
           if(v[m-1][n-1] == 1 || v[0][0] == 1)
               return 0;
           vector<vector<int>>dp(m,vector<int>(n,0));
           dp[0][0] = 1;
         
           for(int i = 0;i<m;i++)
           {
               for(int j = 0;j<n;j++)
               {
                   if(i == 0 && j == 0)
                       continue;
                   else if(i == 0 && v[i][j] == 0) 
                       dp[i][j] = dp[i][j-1];
                   else if(j == 0 && v[i][j] == 0)
                       dp[i][j] = dp[i-1][j];
                  else  if(v[i][j] == 0)
                       dp[i][j] = dp[i-1][j]+dp[i][j-1];
                   
               }
           }
           return dp[m-1][n-1];
    }
};