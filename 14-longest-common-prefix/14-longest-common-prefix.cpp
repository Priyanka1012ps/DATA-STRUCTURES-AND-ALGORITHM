class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int min=1000;
          int count=0;
        string str="";
        for(int i=0;i<strs.size();i++)
        {
            int n= strs[i].size();
            if(n<min)
            {
                min=n;
                str=strs[i];
            }
        }
      
        for(int i=0;i<min;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=str[i])
                {
                    return str.substr(0,count);
                }
                
            }
            
            count++;
        }
         return str.substr(0,count);
    }
};