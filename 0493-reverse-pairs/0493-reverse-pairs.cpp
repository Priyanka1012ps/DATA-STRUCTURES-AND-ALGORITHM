class Solution {
public:
    int merge(vector<int>&nums,int low ,int mid,int high)
    {
        int n=nums.size();
        vector<int> temp;
       
        int k=mid+1;
        int count=0;
        for(int r=low;r<=mid;r++)
        {
            while(k<=high and nums[r] > 2LL * nums[k])
            { 
                k++;
            }
            
            count+=k-(mid+1);
        }
         int i=low;
        int j=mid+1;
        while(i<=mid and j<=high)
        {
            if(nums[i]<=nums[j])
                temp.push_back(nums[i++]);
           else
               temp.push_back(nums[j++]);
            
            
        }
        while(i<=mid)
             temp.push_back(nums[i++]);
        while(j<=high)
            temp.push_back(nums[j++]);
        for(int i=low;i<=high;i++)
        {
            nums[i]=temp[i-low];
        }
        return count;
    }
    int mergesort(vector<int>&nums,int low,int high)
    {
        int  mid;
        int inv=0;
        if(low>=high)
        {
            return 0;
        }
            
            mid=(low+high)/2;
            inv=mergesort(nums,low,mid);
             inv+=mergesort(nums,mid+1,high);
             inv+=merge(nums,low,mid,high);
      
        return inv;
     }
    int reversePairs(vector<int>& nums)
    {
        int n=nums.size();
        return mergesort(nums,0,n-1);
    }
};