class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        priority_queue<pair<int,pair<int,int>>>maxh;
        for(int i=0;i<points.size();i++)
        {
            maxh.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}});
        }
        while(maxh.size()>k)
        {
            maxh.pop();
        }
        vector<int>res;
        vector<vector<int>> ans;
        while(maxh.size()>0)
        {
            int f= maxh.top().second.first;   
              res.push_back(f);
              int sec= maxh.top().second.second;
            res.push_back(sec);
            maxh.pop();
            ans.push_back(res);
        }
        return ans;
    }
};
