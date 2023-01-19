class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        unordered_map<int,int> mp;
        int pref=0,res=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            pref=(pref+nums[i]%k+k)%k;
            res+=mp[pref]++;
        }
        
        return res;
        
    }
};