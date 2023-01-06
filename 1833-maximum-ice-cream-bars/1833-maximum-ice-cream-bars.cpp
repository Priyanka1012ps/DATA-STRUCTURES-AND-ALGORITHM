class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());
    int ret = 0;
    for (int ice_cost : costs)
    {
        if (ice_cost > coins)
            break;
        ret++;
        coins -= ice_cost;
    }
    return ret;
}
};