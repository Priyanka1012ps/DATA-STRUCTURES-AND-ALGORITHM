class Solution {
public:
    int dp[51][51][51];
    int mod=1e9+7;
    int x[4]={0,0,-1,1};
    int y[4]={-1,1,0,0};
    bool valid(int i,int j,int n,int m){ 
        
        if(i>=0 && i<n && j>=0 && j<m) return 1;
        return 0;
    }
    int helper(int n,int m,int k,int i,int j){
        if(!valid(i,j,n,m)) return 1; 
        if(k==0) return 0; 
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        int ans=0;
        for(int d=0;d<4;d++){
            ans=(ans+helper(n,m,k-1,i+x[d],j+y[d]))%mod;
        }
        return dp[i][j][k]=ans;
    }
    int findPaths(int n, int m, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return helper(n,m,maxMove,startRow,startColumn);
    }
};