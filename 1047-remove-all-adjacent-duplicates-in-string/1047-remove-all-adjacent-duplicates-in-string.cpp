class Solution {
public:
//    string removeDuplicates(string s) {
        
//         stack<char>st;
//         string str;
//         for(int i=0; i<s.size() ;i++)
//         {
//             if(s.empty() || st.top()!=s[i]  )
            
//                 st.push(s[i]);
            
//             else
//                 st.pop();
//         }
//        while(!st.empty())
//        {
//            str+=st.top();
//             st.pop();
//         }
//         reverse(str.begin(),str.end());
//         return str;
//     }
    string removeDuplicates(string s) {
       
        int n = s.size();        
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.empty() || st.top()!=s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        
        string str;
        while(!st.empty()){
            str+=(st.top());
            st.pop();
        }
        
        reverse(str.begin(),str.end());
        return str;
    }
        
};