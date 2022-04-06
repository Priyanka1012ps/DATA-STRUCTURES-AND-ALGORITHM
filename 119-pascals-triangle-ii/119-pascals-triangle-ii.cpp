class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
         vector<vector<int>>ans;
    vector<int> v;
        for(int i=0;i<=rowIndex;i++)
        {
                 vector<int>row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j] = ans[i-1][j] + ans[i-1][j-1];
            }
            ans.push_back(row);
        if(i==rowIndex)
            v=row;
    }
       
        return v;
    }
    
};