class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length())return false;
        int w1[26] = {0};
        int w2[26] = {0};
        for(auto c:word1)
        {
            w1[c-'a']++;
        }
        for(auto c:word2)
        {
            w2[c-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if((w1[i]>0 && w2[i]==0) || (w1[i]==0 && w2[i]>0))return false;
        }
        
        sort(w1, w1+26);
        sort(w2, w2+26);
        
        for(int i=0;i<26;i++)
        {
            if(w1[i]!=w2[i])return false;
        }
        return true;
    }
};