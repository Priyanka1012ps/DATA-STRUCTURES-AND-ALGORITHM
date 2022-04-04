class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }

        }
        nums.push_back(target);
        int c;
          sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            
        c=i;
    
       }
        return c;
    }
};