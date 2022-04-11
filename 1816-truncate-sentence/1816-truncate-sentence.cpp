class Solution {
public:
    string truncateSentence(string s, int k)
    {
int count=0;
//         string s1;
//         stack<string>st;
//         for(int i=0;i<s.size();i++)
//         {
//             char ch= s[i];
        
//          while(k!=count)
//          {
          
//             if(s[i] != ' ')
            
//                  s1=s1+ch;
                
//              // s1=s1+' ';
            
//           if(s[i]==' ')
//             count++;

         
//         }
//         }
//         return s1;
//     }
        string s1,word;
         stringstream ss(s) ;
        while(ss >> word and count<k)
        {
           s1+=word;
             s1=s1+' ';
            count++;
        }
        s1.pop_back();
        return s1;
    }
};