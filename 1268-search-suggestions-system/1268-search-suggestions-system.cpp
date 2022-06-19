class TrieNode
{
    public:
    TrieNode* children[27];
    bool isEOW;
    TrieNode()
    {
        for(int i=0;i<27;i++)
        {
            children[i] = NULL;
        }
        isEOW = false;
    }
};
class Trie
{
    public:
    TrieNode* root;
    Trie()
    {
        root = new TrieNode();
    }
    void insert(string &word)
    {
        TrieNode* temp = root;
        for(auto ch:word)
        {
            if(temp->children[ch-'a'] == NULL)
            {
                temp->children[ch-'a'] = new TrieNode();
            }
            temp = temp->children[ch-'a'];
        }
        temp->isEOW = true;
    }
    vector<string>Search(string &prefix)
    {
        vector<string> result;
        TrieNode* temp = root;
        for(auto &ch:prefix)
        {
            if(temp->children[ch-'a'] == NULL)
            {
                return {};
            }
            temp = temp->children[ch-'a'];
        }
        dfs(temp,prefix,result);
        return result;
    }
    void dfs(TrieNode* temp,string prefix,vector<string> &result)
    {
        if(result.size() == 3)
        {
            return;
        }
        if(temp->isEOW == true)
        {
            result.push_back(prefix);
        }
        for(int i=0;i<26;i++)
        {
            if(temp->children[i])
            {
                dfs(temp->children[i],prefix+(char)(i+'a'),result);
            }
        }
    }
};

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string s) {
        sort(p.begin(),p.end());
        Trie* t = new Trie();
        for(auto it:p)
        {
            t->insert(it);
        }
        vector<vector<string>> ans;
        string prefix = "";
        for(auto ch:s)
        {
            prefix += ch;
            ans.push_back(t->Search(prefix));
        }
        return ans;
    }
};