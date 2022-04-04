class Solution {
public:
    int distributeCandies(vector<int>& candyType) 
    {
       unordered_map<int,int>mp;
        int n=candyType.size();
        int m=n/2;
        set<int>s;
        for(int i=0;i<n;i++)
            s.insert(candyType[i]);
        int r=s.size();
        return min(m,r);
    }
};