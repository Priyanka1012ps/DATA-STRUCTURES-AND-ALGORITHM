class Solution {
public:
    static bool sortAccToDiff(vector<int> v1, vector<int> v2) {
        return ((v1[0] - v1[1]) <= (v2[0] - v2[1]));
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),sortAccToDiff);
        int res = 0, i = 0, n = costs.size()/2;
        for(;i<n; i++) {
            res += costs[i][0];
        }
        for(; i < 2*n; i++) {
            res += costs[i][1];
        }
        return res;
    }
};