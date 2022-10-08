class Solution {
public:
  bool solve
(vector<vector<char>>&board)
    {
       for(int i=0;i<board.size();i++)
       {
           for(int j=0;j<board[0].size();j++)
           {
               if(board[i][j]=='.')
               {
                   for(char c='1';c<='9';c++)
                   {
               if(isValid(c,i,j,board))
               {
                   
                   board[i][j]=c;
               
                    if(solve(board)==true)
                        return true;
                       else
                           board[i][j]='.';
                    }
                }
               
               return false;
            }
       }
       }
      return true;
  }
    bool isValid(char c,int i,int j,vector<vector<char>>& board)
    {
        for(int l =0;l<9;l++)
        {
            if(board[i][l]==c)
                return false;
             if(board[l][j]==c)
                return false;
            if(board[3*(i/3)+l/3][3*(j/3)+l%3]==c)
                return false;
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board)
    {
        solve(board);
    }
};