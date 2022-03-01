class Solution {
public:
    vector<int> countBits(int n)
    {
         vector<int>v(n+1);
        int c=0;
        v[0]=0;
       for(int i=1;i<=n;i++)
       {
         v[i]=(i%2 + v[i/2]);
            
       }
        
return v;
    }
};
