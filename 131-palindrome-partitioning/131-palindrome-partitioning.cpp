class Solution {
public:
    vector<vector<string>> partition(string s)
    {
        int ind=0;
        vector<vector<string>>res;
        vector<string>path;
       func(s,ind,path,res);
        return res;
    }
    void func(string s,int ind,vector<string>&path, vector<vector<string>>&res)
    {
        if(ind==s.size())
        {
            res.push_back(path);
            return ;

        }
        for(int i=ind;i<s.size();i++)
        {
            if(isPalin(s,ind,i))
               {
               path.push_back(s.substr(ind,i-ind+1));
               func(s,i+1,path,res);
               path.pop_back();
               }
        }
     }
    
    bool isPalin(string s,int start, int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
    
};