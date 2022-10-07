class Solution {
public:
    void solve(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>& ans, int target)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind and nums[i-1]==nums[i])
                continue;
            if(nums[i]>target)
                break;
            ds.push_back(nums[i]);
            solve(i+1,nums,ds,ans,target-nums[i]);
            ds.pop_back();
        }
        // ds.push_back(freq[ind]);
            
        }
        
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        // int freq[nums.size()];
        // for(int i=0;i<nums.size();i++)
        //     freq[i]=0;
        int ind=0;
        solve(ind,nums,ds,ans, target);
        return ans;
        
    }
};