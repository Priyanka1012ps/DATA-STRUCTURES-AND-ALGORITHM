class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        int count =0;
        string word=" ";
        vector<string>v;
        while(ss>>word)
        {
            count++;
            v.push_back(word);
        }
        return v[count-1].size();
    }
};