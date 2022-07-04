class Solution
{
    public:
    // bool cmp(vector<int> a,vector <int> b)
    // {
    //     return (a[0]<b[0]);
    // }
        vector<vector < int>> merge(vector<vector < int>> &intervals) {
int n=intervals.size();
          sort(intervals.begin(),intervals.end());
            vector<int>curr=intervals[0];
            vector<vector<int>>res;
            for(int i=0;i<n;i++)
            {
                if(curr[1]<intervals[i][0])
                {
                    res.push_back(curr);
                    curr = intervals[i];
                }
                else
                {
                 curr[1]=  max( curr[1],intervals[i][1]);
                    
                }
              
            }
              res.push_back(curr);
            return res;
        }
    
};