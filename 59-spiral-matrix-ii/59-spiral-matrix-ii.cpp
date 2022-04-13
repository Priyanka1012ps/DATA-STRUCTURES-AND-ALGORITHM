class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> m(n,vector<int>(n,0));
    int r1=0,r2=n-1,c1=0,c2=n-1;
    int val=0;
   
    //for n=3
    while(r1<=r2 && c1<=c2)
    {
        for(int i=c1;i<=c2;i++)//left to right 
        {
            m[r1][i]=++val;//1,2,3
        }
        for(int i=r1+1;i<=r2;i++)//4,5 top to bottom
        {
            m[i][c2]=++val;
        }
        for(int i=c2-1;i>=c1;i--)//6 7 right to left
        {
            m[r2][i]=++val; 
        }
        for(int i=r2-1;i>r1;i--) //8 bottom to top
        {
            m[i][c1]=++val;
        }
        
        r1++;
        r2--;
        c1++;
        c2--;
    }
    
    return m;
    

        
    }
};