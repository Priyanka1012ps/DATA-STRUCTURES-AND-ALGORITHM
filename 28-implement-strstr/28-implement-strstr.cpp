class Solution {
public:
    int strStr(string s, string x) 
    {
        int flag;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] ==x [0])
            {
             flag=0;
            
            for(int j=0;j<x.size();j++)
            {
                if(s[i+j]!=x[j])
                {
                    flag=1;
                    break;
                }
                
            }
           
            }
        
            
             if(flag==0)
                return i;
    }  
        
        return -1;
    }
};