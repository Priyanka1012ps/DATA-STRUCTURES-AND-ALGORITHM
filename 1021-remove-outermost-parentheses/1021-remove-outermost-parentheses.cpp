class Solution {
public:
    string removeOuterParentheses(string s){
        stack<char>st;
    string ans;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' && st.size()>0)
        {
        st.push((s[i]));
            ans=ans+s[i];
        }   
       else if(s[i]==')'&& st.top()=='(' && st.size()>1 )
        {
           
//                 ans=ans+(st.top());
                ans=ans+(s[i]);
                st.pop();
            
        }
        else  if(s[i]==')'&& st.top()=='(' && st.size()==1 )
             st.pop();
             else
            st.push(s[i]);
           }
      
           return ans;
    }
};