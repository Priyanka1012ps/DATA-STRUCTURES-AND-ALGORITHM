class Solution {
public:
    int minDeletions(string s) {
        // unordered_map<string,int>mp;
        // for(i=0;i<s.size();i++)
        // {
        //     mp[s[i]]++;
        // }
        // for(auto i :mp)
            vector<int> v(26);
        for(auto a :s)
        {
            v[a-'a']++;
        }
        sort(v.begin(),v.end(),greater<int>());
        int f= v[0];
        int c=0;
        // for(int i=1;i<v.size();i++)
        // {
        //     if(v[i]==f and v[i]!=0)
        //     {
        //         c++;
        //     }
        //     f--;
        // }
        // return c;
        int ans=0;
        for(auto freq:v)
        {
            if(freq>f)
            {
                if(f>0)
                    ans+=freq-f;
                else
                    ans+=freq;
            }
            f=min(f-1,freq-1);
        }
        return ans;
    }
};