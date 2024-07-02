class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int curr=0;
        int max_dist=0;
        for(int i=0;i<gain.size();i++)
        {
            curr+=gain[i];
            max_dist=max(max_dist,curr);
        }
        return max_dist;
    }
};