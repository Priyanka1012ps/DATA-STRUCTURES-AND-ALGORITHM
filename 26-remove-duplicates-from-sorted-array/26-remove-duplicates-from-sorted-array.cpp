class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int arr[n];
        int k=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto i :mp)
        {
            // if(i->second>1)
            // {
                nums.push_back(i.first);
                k++;
            
         }
        sort(nums.begin(),nums.end());
        return k;
       
    }
};