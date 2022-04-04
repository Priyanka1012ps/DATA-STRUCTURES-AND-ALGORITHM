class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int n=nums.size();
       // int  arr[n]={0};
       //  for(int i=0;i<n;i++)
       //  {
       //      arr[nums[i]]++;
       //  }
       //   for(int i=0;i<n;i++)
       //  {
       //  if(arr[i]==0)
       //      return i;
       //   }
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            if(nums[i]!=i)
                break;
        }
        return i;
    }
};