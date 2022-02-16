class Solution {
public:
    string reorganizeString(string s) 
    {
        priority_queue <pair<int,char>> maxh;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            maxh.push({i->second,i->first});
        }
        int i=0;
        int n=s.length();


        while(maxh.size()>0)
        {
             for(int j=0;j<maxh.top().first;j++)
             {
                 if(i>n-1)
                     i=1;
                   s[i] = maxh.top().second;
                 i=i+2;
             }
            maxh.pop();
        }
        if(maxh.top().first>(n-1)/2)
        {
            return " ";
        }
        return s;
    }
};
