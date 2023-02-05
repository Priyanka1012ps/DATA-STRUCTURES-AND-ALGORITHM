class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int>ans;
        int n=s.length(),m=p.length();
        unordered_map<char,int>mp,mmp;
        for(int i=0;i<m;i++)
        {
            mmp[p[i]]++;
        }
        int j=0;

        for(int i=0;i<n;)
        {
            while(i-j<m)
            {
                mp[s[i]]++;
                i++;
            }
            int flag=1;
            for(auto x:mmp)
            {
                if(mp[x.first]!=x.second)
                {
                    flag=0;
                    break;
                }
                
            }
            if(flag==1)ans.push_back(j);
            mp[s[j]]--;
            j++;
            
            
            
        }
        return ans;
    }
};