class Solution {
public:
string removeDuplicates(string s, int k) {
        
        stack<pair<char, int>> st;
    
        for(char& ch : s){
            
            if(!st.empty() and st.top().second==k){
                st.pop();
            }
            
            if(st.empty()) st.push({ch,1});
            else{
                if(st.top().first == ch){
                    st.top().second++;
                }
                else{
                    st.push({ch,1});
                }
            } 
        }
        
        while(!st.empty() and st.top().second==k){
            st.pop();
        }
        
        string ans;
        while(!st.empty()){
            while(st.top().second>0){
                ans += st.top().first;
                st.top().second--;
            }
            st.pop();
        }
        reverse(begin(ans), end(ans));
        
        return ans;
    }
};