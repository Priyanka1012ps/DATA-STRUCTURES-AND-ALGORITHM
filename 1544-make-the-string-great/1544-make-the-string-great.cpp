class Solution {
public:
    string makeGood(string s)
    {
        string str;
        stack<char>st;
        //string str;
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && abs(st.top()-s[i])==32 )
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
         while(!st.empty())
        {
            str=str+st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
