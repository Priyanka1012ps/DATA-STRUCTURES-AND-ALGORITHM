unordered_map<char, int> mp;

class Solution {
public:
    bool static change(string a, string b){
        int n = min(a.length(), b.length());
        for(int i = 0; i < n; i++){
            if(mp[a[i]] < mp[b[i]]){
                return true;
            }
            else if(mp[a[i]] > mp[b[i]]){
                return false;
            }
        }
        if(a.length() <= b.length()){
            return true;
        }
        return false;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < order.length(); i++)
            mp[order[i]] = i;
        
        vector<string> temp = words;
        sort(temp.begin(), temp.end(), change);
        return temp == words;
    }
};