class Solution {
public:
    bool isPalin(string &s){
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++,j--;
        }
        return true;
    }
    bool check(vector<string>&curr){
        for(string s : curr){
            if(!isPalin(s))return false;
        }
        return true;
    }
    void help(vector<vector<string>>&ans, string &s, vector<string>curr, int i){
        if(i>=s.length()){
            if(check(curr)){
                ans.push_back(curr);
            }
            return;
        }
        string temp="";
        for(int j=i;j<s.length();j++){
            temp+=s[j];
            curr.push_back(temp);
            help(ans,s,curr,j+1);
            curr.pop_back();
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>curr;
        help(ans,s,curr,0);
        return ans;        
    }
};