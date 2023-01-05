class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
         sort(points.begin(), points.end());
        int lastpoint = points[0][1];
        int count=0;
        for(int i=0;i<points.size();++i) {
            if(points[i][0] > lastpoint) {
                count++;
                lastpoint = points[i][1];
            }
            lastpoint = min(points[i][1],lastpoint);
        }
        return ++count;
    }
};