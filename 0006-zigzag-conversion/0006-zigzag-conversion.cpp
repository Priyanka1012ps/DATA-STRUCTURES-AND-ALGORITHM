class Solution {
public:
    string convert(string s, int n) {
         string ans[n];
        int m=s.size();
        for(int i=0;i<m;){
            for(int j=0;j<n&&i<m;j++,i++){
                ans[j].push_back(s[i]);
            }
            int t=n-2;
            for(int k=0;k<t&&i<m;k++,i++){
                ans[t-k].push_back(s[i]);
            }
        }
        string r="";
        for(auto &i:ans){
            for(char c:i)
                r+=c;
        }
        return r;
    }
};