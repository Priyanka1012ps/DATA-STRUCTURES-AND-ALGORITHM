class Solution {
public:
    void  solve(int ind,int target,vector<int> ds,vector<vector<int>>&ans,vector<int>nums)
    {
        if(ind==nums.size() )
        {
            if( target==0)
         ans.push_back(ds);
             return;
        }
           
           
       
            if(nums[ind]<=target)
            {
ds.push_back(nums[ind]);
            solve(ind,target-nums[ind],ds, ans, nums);
             ds.pop_back();
            }
            solve(ind+1,target, ds,ans,nums);
           
        }
    
    
    vector<vector<int>> combinationSum(vector<int>nums, int target)
    {
        vector<vector<int>>ans;
    int ind=0;
        vector<int>ds;
        solve(ind,target,ds, ans, nums);
        return ans;
        
    }
};