class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(),nums.end());
        int sum=0;
        int out;
        int min=INT_MAX;
        for(int i=0;i<nums.size()-2;i++)
        {
           
            if(i==0 or nums[i]!=nums[i-1])
            {
                int left=i+1;
                 int right=nums.size()-1;
                while(left<right)
                {
                 
                sum=nums[i]+nums[left]+nums[right];
                    
                if(sum==target)
                    return sum;
                    
                else if(sum<target)
                    
                     left++;
                else
                    
                     right--;
                if(abs(target-sum)<min)
                {
                     out=sum;
                    min=abs(target-sum);
                }
                } 
            }
        }
        return out;
    }
};