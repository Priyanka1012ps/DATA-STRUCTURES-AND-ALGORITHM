class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<vector<int>> tasks1;
        for(int i=0;i<tasks.size();i++)
        {
            tasks1.push_back({tasks[i][0],tasks[i][1],i});
        }
        sort(tasks1.begin(),tasks1.end());
        int tim = tasks1[0][0];
        int j=0;
        vector<int> ans;
        int flg=0;
        while(1)
        {
            while(j<tasks1.size() && tasks1[j][0]<=tim )
            {
                int pt = tasks1[j][1];
                pq.push({pt,tasks1[j][2]});
                j++;
                flg=1;
            }
            if(!pq.empty())
            {
                tim+=pq.top().first;
                ans.push_back(pq.top().second);
                pq.pop();
                flg=1;
            }
            if(!flg)
            {
                tim=tasks1[j][0];
            }
            flg=0;
            if(j==tasks1.size())
            break;
        }
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};