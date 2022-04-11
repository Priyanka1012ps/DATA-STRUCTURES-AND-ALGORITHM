class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        vector<int>v;
    int n=grid.size();
    int m=grid[0].size();
    k=k%(n*m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            v.push_back(grid[i][j]);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            v.push_back(grid[i][j]);
    
    vector<vector<int>>ans;
    int size=n*m-k;
    vector<int>temp;
    int t=0;
    for(int i=size;i<(m*n+size);i++)
    {
        temp.push_back(v[i]);
        t++;
        if(t==m)
        {
            ans.push_back(temp);
            temp.clear();
            t=0;
        }
    }
    return ans;
    
    
}
    
};