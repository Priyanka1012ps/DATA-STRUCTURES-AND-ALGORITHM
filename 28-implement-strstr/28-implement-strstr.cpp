class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int flag;
        int x=haystack.size();
        int i;
        int y=needle.size();
        for( i=0;i<x;i++)
        {
            if(haystack[i]==needle[0])
            {
                flag=0;
            for(int j=0;j<y;j++)
            {
                if(haystack[i+j]!=needle[j])
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