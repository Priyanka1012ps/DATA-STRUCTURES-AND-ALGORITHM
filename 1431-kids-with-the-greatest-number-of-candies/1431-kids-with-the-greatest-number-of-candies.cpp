class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
         vector<bool> res;
        vector<int>A;
        for(int i=0;i<candies.size();i++)
        {
            A.push_back(candies[i]+extraCandies);
        }
        int maxi=INT_MIN;
       for(int i=0;i<candies.size();i++)
        {
          if(maxi<candies[i])
              maxi=candies[i];
       }
        cout<<maxi;
        
        
         for(int i=0;i<A.size();i++)
        {
             if(A[i]>=maxi)
                 res.push_back(true);
             else
               res.push_back(false);
        
         }
        
        return res;
        
    }
};