class Solution {
public:
    int myAtoi(string s)
    {
        
//         if(s.size()==0)
            return 0;
        
//         int i=0;
//         while(i<s.size() and s[i]==' ')
//             i++;
//         s=s.substr(i);
//         int sign=1;
//         if(s[0]=='-')
//             sign=-1;
//         int max=INT_MAX;
//         int min=INT_MIN;
//         long ans=0;
//         i= (s[0]=='+' or s[0]=='-')? 1:0;
//         while(i<s.size())
//         {
//             if(s[i]==' ' or !isdigit(s[i]))
//                 break;
//             ans = ans*10+s[i]-'0';
//             if(sign==-1 and -1*ans<min)
//                 return min;
//              if(sign==1 and ans > max)
//                     return max;
//                     i++;
                
                
//         }
//                     return (int) (ans*sign);
//     }
        int sign=1;
        int n=s.size();
        long ans=0;
        if(s.size()==0)
            return 0;
        int i=0;
        while(i<n and s[i]==' ')
            i++;
        s=s.substr(i);
         if(s[0]=='-')
             sign=-1;
        i=(s[0]=='-' or s[0]=='+')? 1:0;
           
        while(i<s.size())
        {
        if(s[i]==' ' or !isdigit(s[i]))
            break;
        ans=ans*10+(s[i]-'0');
            if(sign==-1 and -1*ans<INT_MIN)
                return INT_MIN;
             if(sign==1 and ans>INT_MAX)
                return INT_MAX;
            i++;
            
            
        }
        return int(sign*ans);
        
    }
        
};
