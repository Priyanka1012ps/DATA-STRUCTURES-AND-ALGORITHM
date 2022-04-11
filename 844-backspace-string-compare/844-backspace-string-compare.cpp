class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>st;
        stack<char>st1;
        string s1="";
         string s2="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
                
            {
                if(!s1.empty())
                {
                    s1.pop_back();
                }
                else
                    continue;
            }
               
            else
                  s1.push_back(s[i]);
        }
       
         for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
                
            {
                if(!s2.empty())
                {
                    s2.pop_back();
                }
                else
                    continue;
            }
               
            else
                   s2.push_back(t[i]);
        }
        if(s1 !=s2)
            return false;
       else
           return true;
    }
};
// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         string s1="",t1="";
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='#'){
//                 if(!s1.empty()){
//                     s1.pop_back();
//                 }
//                 else continue;
//             }
//             else s1.push_back(s[i]);
//         }
//         for(int i=0;i<t.length();i++){
//             if(t[i]=='#'){
//                 if(!t1.empty()){
//                     t1.pop_back();
//                 }
//                 else continue;
//             }
//             else t1.push_back(t[i]);
//         }
//         cout<<s1<<" "<<t1<<endl;
//         if(s1!=t1) return false;
//         return true;
//     }
// };