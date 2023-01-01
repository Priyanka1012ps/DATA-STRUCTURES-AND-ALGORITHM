class Solution {
public:
    vector<string> extractWord(string s){
        vector<string> res;
        string temp = "";
        for(int i=0; i < s.length() ; i++){
            if(s[i]==' ') continue;
            while(i<s.length() and s[i]!=' '){
                temp += s[i];
                i++;
            }
            res.push_back(temp);
            temp = "";
        }
        return res;
    }

    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        unordered_set<string> st;
        vector<string> res = extractWord(s);
        if(res.size() != pattern.length()) return false;
        for(int i=0, j=0; i<res.size() and j<pattern.length(); i++, j++){
            if(mp.find(pattern[j])!=mp.end())
            {
                if(mp[pattern[j]] != res[i]) return false;
            }
            
            else
            {
                if(st.count(res[i])) return false;
                mp[pattern[j]] = res[i];
                st.insert(res[i]);
            }
        }
        return true;
    }
};