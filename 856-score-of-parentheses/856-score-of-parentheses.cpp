class Solution {
public:
    int scoreOfParentheses(string s) {
        if(s.size() == 0)
            return 0;
        int o = 0, c = 0, idx = 0;
        for(int i=0; s[i] != '\0'; i++){
            if(s[i] == '(')
                o += 1;
            else
                c += 1;
            if(o == c){
                idx = i;
                break;
            }
        }
        string x = s.substr(1, idx-1), y = s.substr(idx+1);
        
        if(x.empty())
            return 1 + scoreOfParentheses(y);
        return 2*scoreOfParentheses(x)
                + scoreOfParentheses(y);
    }
};