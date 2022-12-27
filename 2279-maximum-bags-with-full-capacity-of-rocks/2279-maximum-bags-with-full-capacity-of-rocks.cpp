class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count = 0;
        priority_queue<int, vector<int>, greater<int>> min_h;
        for(int i=0;i<rocks.size();i++)
        {   
            if(capacity[i]-rocks[i]==0)
                count++;
            else
                min_h.push(capacity[i]-rocks[i]);
        }
        while(min_h.empty() == false && additionalRocks > 0)
        {
            additionalRocks -= min_h.top();
            min_h.pop();
            if(additionalRocks>=0)
                count++;
        }
        return count;
    }
};