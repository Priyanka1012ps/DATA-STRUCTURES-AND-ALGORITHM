class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int n1=word1.size();
        int n2 =word2.size();
        int m =max(n1,n2);
        string new1 ;
        for(int i=0;i<m;i++)
        {
            if(i<n1)
                new1+=word1[i];
            if(i<n2)
                new1+=word2[i];
        }
        
        return new1;
        
       
    }
};