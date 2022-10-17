
    class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>vis(26,0);
        int count=0;
        for(auto i:s)
        {
            if(!vis[i-'a'])
            {
                vis[i-'a']=1;
                count++;
            }
        }
        if(count>=26)
            return 1;
        return 0;
        
    }

};