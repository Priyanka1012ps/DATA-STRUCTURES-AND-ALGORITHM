class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int N=(int)t.size();
        vector<int> res(N);
        stack<pair<int,int>> st;
        for (int i=0; i<N; ++i){
            while (!st.empty() && st.top().first<t[i]){
                int j=st.top().second; st.pop();
                res[j]=i-j;
            }
            if (i<N-1 && t[i]<t[i+1]){
                res[i]=1;
            } else {
                st.push({t[i],i});
            }
        }
        return res;
    }
};
