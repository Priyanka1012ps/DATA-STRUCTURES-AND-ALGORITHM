class Solution 
{
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        priority_queue<int> p;
        for(auto s:stones)
        {
            p.push(s);
        }
        while(p.size()>1)
        {
            int x=p.top();
            p.pop();
            int y=p.top();
            p.pop();
            x=x-y;
            if(x!=0)
            {
                p.push(x);
            }
        }
        if(p.empty())
        {
            return 0;
        }
        return p.top();
    }
};