class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        
         vector<int>res;
        
        int count_zero=0;
        int product_w_z=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                count_zero++;
            }
            else 
            {
                product_w_z*=nums[i];
            }
            
                
        }
        
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            
            if(num!=0)
            {
                if(count_zero>0)
                    res.push_back(0);
                else
                {
                    res.push_back(product_w_z/num);
                }
            }
            
            else
            {
               if(count_zero>1)
                    res.push_back(0);
                else
                res.push_back(product_w_z);
            }
        
        
        
        }
         return res;
        
    }
};