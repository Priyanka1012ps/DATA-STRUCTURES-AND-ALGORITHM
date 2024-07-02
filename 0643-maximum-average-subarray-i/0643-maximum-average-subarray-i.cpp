class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
       double sum=0;
        
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        
         double max_sum=sum;
        int start=0;
        int end = k;
      
        
       while(end<nums.size())
        {
            sum-=nums[start];
            start++;
            
            sum+=nums[end];
            end++;
            
            max_sum=max(max_sum,sum);
        }
        
        return double(max_sum/k);
        
        
    }
};