class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         unordered_map<int,int>mp;
        int k=0;
        for(int i=0;i<nums.size();i++)
         mp[nums[i]]++;
        nums.clear();
         for(auto i:mp)
        {
            if(i.first!=val)
            {
            while(i.second--)
              nums.push_back(i.first);
            }
         }
           
       
         return nums.size();
        
    }
};