class Solution {
public:
    int repeatedStringMatch(string a, string b) 
    {
        int count=1;
        int repeat=b.size()/a.size();
        string str= a;
        for(int i=0;i<repeat+2;i++)
        {
                if( (a.find(b) != string::npos))
            {
            return count;
            }
            
            else
                
             {
                count++;
                a=a+str;
             }
            

        }
        return -1;
    }
};