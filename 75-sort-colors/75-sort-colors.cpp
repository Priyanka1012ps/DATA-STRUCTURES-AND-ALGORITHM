class Solution {
public:
   void swap(int &a, int  &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    void sortColors(vector<int>& nums) 
    {
        int l=0;
        int m=0;
        int h= nums.size()-1;
        // for(int i=0;i<nums.size();i++)
        // {
        while(m<=h)
        {
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
            l++;
            m++;
            }
        else if(nums[m]==1)
            m++;
          else
            {
                swap(nums[m],nums[h]);
                // m++;
                h--;
            }
                
        }
    }
};