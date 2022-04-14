class Solution {
public:
    bool isAnagram(string s, string t) 
   {
         unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        if(t.size() > s.size() || t.size() < s.size())
            return false;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            mp1[t[i]]++;
        }
       if(mp1==mp)
           return true;
        else
            return false;
    }
};
