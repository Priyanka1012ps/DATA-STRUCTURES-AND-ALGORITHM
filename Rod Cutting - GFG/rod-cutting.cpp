//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int solve(int ind,int price[], int tar,   vector<vector<int>>&dp)
  {
      if(ind==0)
      {
          return(tar*price[0]);
      }
      if(dp[ind][tar]!=-1)
      return dp[ind][tar];
     int notpick=0+solve(ind-1,price,tar,dp);
     int pick=INT_MIN;
     int rodlen=ind+1;
     if(rodlen<=tar)
     pick=price[ind]+solve(ind,price,tar-rodlen,dp);
     return dp[ind][tar]=max(pick,notpick);
     
  }
    int cutRod(int price[], int n) {
       
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(n-1,price,n,dp);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends