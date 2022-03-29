class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        
            mp[nums[i]]++;
        
        for(auto i :mp)
        {
            if(i.second>1)
            
                res=i.first;
            
        }
        return res;
    }
};