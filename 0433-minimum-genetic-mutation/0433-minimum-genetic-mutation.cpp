class Solution {
public:
    int minMutation(string s, string e, vector<string>& b) {
    
    queue<string> q;
    unordered_set<string> visited;
    
    q.push(s);
    visited.insert(s);
    
    int count=0;
    
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            string node = q.front();
            q.pop();
            
            if(node == e)
            {
                return count;
            }
            
            for(char ch:"ACGT")
            {
                for(int j=0;j<node.size();j++)
                {
                    string adjnode = node;
                    adjnode[j] = ch;
                    if(!visited.count(adjnode) && find(b.begin(),b.end(),adjnode) != b.end())
                    {
                        q.push(adjnode);
                        visited.insert(adjnode);
                    }
                }
            }
        }
        count++;
    }
    
    return -1;
}
};