class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int maxs=nums[0];
        int curr_sum=nums[0];
        // if(nums.size()==1)
        //     return nums[0];
        for(int i=1;i<nums.size();i++)
        {
            curr_sum = max(curr_sum+nums[i],nums[i]);
            if(curr_sum>maxs)
                maxs=curr_sum;
            // if(curr_sum<0)
            //     curr_sum=0;
            
        }
        return maxs;
    }
};