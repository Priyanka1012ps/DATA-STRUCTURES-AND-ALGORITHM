class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
    int x=INT_MIN;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1 )
            {
                c++;
                
            }
            else
                c=0;
            x=max(x,c);
        }
        return x;
    }
};