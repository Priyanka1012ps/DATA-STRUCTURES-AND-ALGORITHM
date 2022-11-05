class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         vector<vector<int>> mergedinterval;
        if(intervals.size()==0)
            return mergedinterval;
        sort(intervals.begin(),intervals.end());
        vector<int>inter=intervals[0];
        
        for(auto it:intervals)
        {
            if(it[0]<=inter[1])
                inter[1]=max(it[1],inter[1]);
            else
            {
              mergedinterval.push_back(inter);
            inter=it;
            }
        }
         mergedinterval.push_back(inter);
        return  mergedinterval;
    }
};