class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int count=0;
        int p=0;
        int c;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=nums[i];j>0;j=j/10)
            {
                p++;
                
            }
            if(p%2==0)
            {
                count++;
            }
            p=0;
        }
        return count;
    }
};