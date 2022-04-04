class Solution {
public:
    int heightChecker(vector<int>& h)
    {
        int c=0;
        vector<int>v;
        for(int i=0;i<h.size();i++)
        {
            v.push_back(h[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<h.size();i++)
        {
            if (h[i]!=v[i])
            {
                c++;
            }
        }
        return c;
    }
};