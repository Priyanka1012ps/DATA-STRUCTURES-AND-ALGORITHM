class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        //sort(nums.begin(),nums.end());
        int i=0;
        int j=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]!=0)
           {
               nums[j]=nums[i];
               j++;
            }
               
       }
        while(j!=nums.size())
        {
            nums[j]=0;
            j++;
        }
        
    }
};