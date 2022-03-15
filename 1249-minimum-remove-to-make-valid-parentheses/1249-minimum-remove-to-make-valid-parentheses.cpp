class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open = 0, close = 0; //to keep count of opening and closing brackets
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
            }
            else if(s[i]==')'){
                if(open==0){
                    s[i]='*';
                }
                else{
                    open--; //balancing the brackets
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                close++;
            }
            else if(s[i]=='('){
                if(close==0){
                    s[i]='*';
                }
                else{
                    close--; //balancing the brackets
                }
            }
        }
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                ans.push_back(s[i]); //only appending the valid characters
            }
        }        
        return ans;
    }
};