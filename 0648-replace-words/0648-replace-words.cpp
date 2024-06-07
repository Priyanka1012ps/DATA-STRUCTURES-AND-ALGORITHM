class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string, int> m;
        for (auto& i : dictionary) {
            m[i]++;
        }
        int n = sentence.size();
        string s = "";
        string ans = "";
        for (int i = 0; i < n; i++) {
            s.push_back(sentence[i]);
            if (m[s]) {
                ans += s + ' ';
                while (i < n && sentence[i] != ' ') {
                    i++;
                    if (i == n)
                        ans.pop_back();
                }
                s.clear();
            } else if (sentence[i] == ' ' || i == n - 1) {
                ans += s;
                s.clear();
            }
        }
        return ans;
    }
};
