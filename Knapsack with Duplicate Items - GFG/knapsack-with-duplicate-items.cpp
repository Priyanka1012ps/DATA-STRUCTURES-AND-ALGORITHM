//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int solve(int ind,int tar,int val[], int wt[], vector<vector<int>>&dp)
{
    if(ind==0)
    {
        // if(tar==0)
        // return 0;
        // if(tar==wt[0])
        // return 1;
        return ((int)tar/wt[0])*val[0];
    }
    if(dp[ind][tar]!=-1)
    return dp[ind][tar];
        int notpick=solve(ind-1,tar,val,wt,dp);
        int pick=INT_MIN;
        if(wt[ind]<=tar)
        pick=val[ind]+solve(ind,tar-wt[ind],val,wt,dp);
        return dp[ind][tar]=max(pick,notpick);
    }

    int knapSack(int n, int w, int val[], int wt[])
    {
      vector<vector<int>>dp(n,vector<int>(w+1,-1));
     return solve(n-1,w,val,wt,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends