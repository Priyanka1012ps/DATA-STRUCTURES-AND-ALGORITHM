class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& eff, int k) {
        int mod = 1e9 + 7;
        vector<int> idx(n);
        iota(begin(idx), end(idx), 0);  
        sort(begin(idx), end(idx), [&](const auto & a, const auto & b)
             {
                 return eff[a] < eff[b];
             });
        
        priority_queue<int, vector<int>, greater<int>> q;
        long long res = 0, sum = 0;
        for (int i=n-1; i>=0; --i)
        {
            q.push(speed[idx[i]]), sum += speed[idx[i]];
            if (q.size() > k)
            {
                sum -= q.top(); q.pop();
            }
            res = max(res, sum * (long long)eff[idx[i]]);
        }
        return res % mod;
    }
};