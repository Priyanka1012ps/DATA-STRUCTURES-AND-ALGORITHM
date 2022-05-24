class Solution {
public:
   int longestValidParentheses(string s) {
        stack<pair<char,int>> st;
        st.push({'$',0});                                       
        for(int i=0;i<(int)s.length();i++){
            pair<char,int> x = st.top();
            if(s[i]==')' && x.first == '('){                   
                st.pop();
                pair<char,int> y = st.top();st.pop();
                st.push({y.first,x.second+y.second+2});        
            }
            else{
                st.push({s[i],0});
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans = max(ans,st.top().second);
            st.pop();
        }
        return ans;
    }
};