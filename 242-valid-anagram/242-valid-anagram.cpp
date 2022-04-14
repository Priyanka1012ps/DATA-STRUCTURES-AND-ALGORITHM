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
// // class Solution {
// // public:
// //     bool isAnagram(string s, string t) {
        
// //          if (s.size() != t.size()) return false;

// //          sort(s.begin(), s.end());
// //          sort(t.begin(), t.end());
// //          if(s == t)
// //              return true;
// //         return false;
// //     }
// // };
//  if (s.size() != t.size()) return false;
//         unordered_map<char, int> a, b; // we create two unordered maps
//         for (int i=0; i<s.size(); i++)
//         {
//             a[s[i]]++; // we hash the first string into the first map
//             b[t[i]]++; // we hash the second string into the second map
//         }
        
//         if(a == b) // if both the maps match, we return true else we return false.
//             return true;
//         return false;
//     }
// };