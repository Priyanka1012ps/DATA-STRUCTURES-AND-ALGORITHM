class Solution {
public:
    int strStr(string s, string x) 
    {
//         int flag;
        
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i] ==x [0])
//             {
//              flag=0;
            
//             for(int j=0;j<x.size();j++)
//             {
//                 if(s[i+j]!=x[j])
//                 {
//                     flag=1;
//                     break;
//                 }
                
//             }
           
//             }
        
            
//              if(flag==0)
//                 return i;
//     }  
        
//         return -1;
        int n=s.size();
        int m=x.size();
        bool flag;
        int ind;
        int i;
        for( i=0;i<n;i++)
        {
            if(s[i] ==x [0])
            {
             flag=1;
            
            for(int j=0;j<m;j++)
            {
                if(x[j]!=s[i+j])
                {
                    flag= 0;
                   break;
                }
               
            }
        }
            
        if(flag==1)
            return i;
    }
       
            return -1;
    }
};