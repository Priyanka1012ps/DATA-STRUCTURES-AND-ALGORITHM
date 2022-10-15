class Solution {
public:
    int Len(int x) { 
        if(x == 1) return 0;
        else if(x < 10) return 1;
        else if (x< 100) return 2;
        return 3;
    }

    
    int getLengthOfOptimalCompression(string s, int k) {
        int n = s.size();
        vector<vector<int>>dp(n+1, vector<int>(k+1, n+1));        
        for(int r = 1; r<=n; ++r){ 
            unordered_map<char,int>cnt;
            int most = 0;
            for(int l = r; l>=1; --l){ 
                
                most = max(most, ++cnt[s[l-1]]);  
                for(int j = 0; j<=k && j <= r; ++ j){
                    
                    int del = r - l +1 - most; 
                    
                    if(del > j) continue; 
                    if(r == j)  dp[r][j] = 0; 
                    else
                        dp[r][j] = min(dp[r][j], 1 + Len(most) + ( l-1  == 0 ? 0:  dp[l-1][j-del]));
                }   
            }
        }
        return dp[n][k];
    }
};