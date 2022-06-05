class Solution {
public:
    
    bool check(vector<vector<string>>&v,int n,int r,int c)
    {
        for(int i=0;i<n;i++)
        {
            if(v[i][c]=="Q")
            {
                return false;
            }
            else if(v[r][i]=="Q")
            {
                return false;
            }
        }
        
        int i=r,j=c;
        while(i<n && j<n)
        {
            if(v[i][j]=="Q")
            {
                return false;
            }
            i++;
            j++;
        }
        
        i=r;j=c;
        while(i>=0 && j>=0)
        {
            if(v[i][j]=="Q")
            {
                return false;
            }
            i--;
            j--;
        }
        
        i=r,j=c;
        while(i<n && j>=0)
        {
            if(v[i][j]=="Q")
            {
                return false;
            }
            i++;
            j--;
        }
        
        i=r;j=c;
        while(i>=0 && j<n)
        {
            if(v[i][j]=="Q")
            {
                return false;
            }
            i--;
            j++;
        }
        return true;
    }
    
    void solve(vector<vector<string>>&v,int &count,int n,int i)
    {
        if(i==n)
        {
            count++;
            return;
        }
        for(int j=0;j<n;j++)
        {
            if(check(v,n,i,j))
            {
                v[i][j]="Q";
                solve(v,count,n,i+1);
                v[i][j]=".";
            } 
        }
    }
    
    int totalNQueens(int n)
    {
        vector<vector<string>>v(n,vector<string>(n,"."));
        int count=0;
        solve(v,count,n,0);
        return count;
    }
};