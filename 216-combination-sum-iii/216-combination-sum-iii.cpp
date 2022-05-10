class Solution {
public:
    void combSum(int k, int n, int j, vector<int>& tmp, vector<vector<int>>& res)
{
    if(k==0 && n==0)
    {
        res.push_back(tmp);
        return;
    }
    
    if(n==0 && k>0)
        return;
    
    for(int i=j+1; i<=9; i++)
    {
        if(n-i < 0)
            return;
        tmp.push_back(i);
        combSum(k-1, n-i, i, tmp, res);
        tmp.pop_back();
    }
    
}

vector<vector<int>> combinationSum3(int k, int n) {
    
    vector<vector<int>> res;
    for(int i=1; i<=9; i++)
    {
        vector<int> tmp;
        if((n - i) < 0)
            return res;
        tmp.push_back(i);
        combSum(k-1, n-i, i, tmp, res);
    }
    
    return res;
}

};