class Solution {
public:
//     bool isSafe(int row, int col,vector<string>&board, vector<vector<string>>&ans, int n)
//     {
//         int duprow=row;
//         int dupcol=col;
//         while(col>=0 and row>=0)
//         {
//             if(board[row][col]=='Q')
//                 return false;
//                col--;
//                row--;
//         }
//         row=duprow;
//         col=dupcol;
//         while(col>=0)
//         {
//             if(board[row][col]=='Q')
//                 return false;
//             col--;
//         }
//         row=duprow;
//         col=dupcol;
//        while(col>=0 and row<n)
//         {
//             if(board[row][col]=='Q')
//                 return false;
//             col--;
//            row++;
//         }
//        return true;
            
//     }
    void solve(int col,vector<int>&leftrow,vector<int>&upperdia,vector<int>&lowerdia,vector<string>&board,vector<vector<string>>&ans, int n)
    {
        if(col==n)
        {
            ans.push_back(board);
             
        return;
        }
        for(int row=0;row<n;row++)
        {
            if(leftrow[row]==0 and upperdia[row+col]==0 and lowerdia[n-1+ col-row]==0)
            {
                board[row][col]='Q';
               
                leftrow[row]=1;
                upperdia[row+col]=1;
                lowerdia[n-1 +col-row]=1;
                 solve(col+1,leftrow,upperdia,lowerdia,board,ans,n);
                board[row][col]='.';
                leftrow[row]=0;
                upperdia[row+col]=0;
                lowerdia[n-1 +col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        vector<int>leftrow(n,0),upperdia(2*n-1,0),lowerdia(
2*n-1,0);
        
        solve(0,leftrow,upperdia,lowerdia,board,ans,n);
        return ans;
        
    }
};