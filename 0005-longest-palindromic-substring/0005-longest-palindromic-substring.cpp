class Solution {
public:
    string longestPalindrome(string s)
    {
//         int l, h;
        
//         int start=0;
//         int end =1;
//         for(int i=0;i<s.length();i++)
//         {
//             l=i-1;
//             h=i;
//             while(l>=0 and h<s.length() and s[l]==s[h])
//             {
//                 if(h-l+1> end)
//                 {
//                     start=l;
//                     end = h-l+1;
//                 }
//             }
//             l=i-1;
//             h=i+1;
//             while(l>=0 and h<s.length() and s[l]==s[h])
//             {
//                 if(h-l+1> end)
//                 {
//                     start=l;
//                     end = h-l+1;
//                 }
//             }
//         }
//         return s.substr(start,start+end-1);
//     }
        int n=s.size();
        if(n<=1)
            return s;
        int max_len=1;
        int len=0;
        int l , r, st=0 , end=0;
        
        for(int i=0;i<s.size()-1;i++)
        {
            l=r=i;
            
        
        while(l>=0 and r<n)
        {
            if( s[l]==s[r])
            {
                r++;
                l--;
            }
            else
                break;
        }
       len=r-l-1;
        if(max_len<len)
        {
            max_len=len;
        st=l+1;
        end=r-1;
        }
    }
        for(int i=0;i<s.size()-1;i++)
        {
            l=i;
            r=i+1;
            
        
        while(l>=0 and r<n)
        {
            if( s[l]==s[r])
            {
                r++;
                l--;
            }
            else
                break;
        }
       len=r-l-1;
        if(max_len<len)
        {
            max_len=len;
         st=l+1;
        end=r-1;
        }
    }
        return s.substr(st,max_len);
    }
        
};