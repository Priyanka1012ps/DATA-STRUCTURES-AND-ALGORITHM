class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1) { return nums[0]; }
        int low = 0, high = nums.size() - 1;
        while(low<=high) {
            
            int m = (low+high)/2;
            
            if(m>0 && nums[m-1]==nums[m]) {
                
                if((high-m)%2==1) 
                { low = m+1;
                } 
                else { 
                    high = m; 
                }
            } 
            else if(m<n-1 && nums[m]==nums[m+1]) {
              
                if((m-low)%2==1) 
                {
                    high = m - 1; 
                } 
                else
                { 
                    low = m;
                }
                
            } 
            else
            {
                return nums[m]; 
            }
        }
        return nums[low];
    }
};