class Solution {
public:
    int countOrders(int n) {
        
        long int res=1;
        long int mod = 1000000007;
        
        for(int i=1;i<=n;i++)
        {
            res=res*i;
            res=res%mod;
            
            res=res *(2*i-1);
            res%=mod;
        }
        
        return res%mod;
    }
};
