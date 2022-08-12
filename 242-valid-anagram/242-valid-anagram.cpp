class Solution {
public:
    bool isAnagram(string s, string t) 
   {
       //   unordered_map<char,int>mp;
       //  unordered_map<char,int>mp1;
       //  if(t.size() > s.size() || t.size() < s.size())
       //      return false;
       //  for(int i=0;i<s.size();i++)
       //  {
       //      mp[s[i]]++;
       //      mp1[t[i]]++;
       //  }
       // if(mp1==mp)
       //     return true;
       //  else
       //      return false;
        
        if(t.size() > s.size() || t.size() < s.size())
             return false;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
         for(int i=0;i<t.size();i++)
        {
            mp[t[i]]--;
        }
        for(auto it: mp)
        {
            if(it.second!=0)
                return false;
        }
        return true;
    }
};
