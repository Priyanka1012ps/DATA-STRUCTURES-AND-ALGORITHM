class Solution {
public:
   void solve(vector<int>&nums,vector<int>&ds,int n, int ind ,vector<vector<int>>&ans)
   {
      
       if(ind>=n)
        {
            
                ans.push_back(ds);
          return;
        }
       ds.push_back(nums[ind]);
       solve(nums,ds,n,ind+1, ans);
       ds.pop_back();
        solve(nums,ds,n,ind+1, ans);
      
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        int ind=0;
        int n=nums.size();
        vector<int>ds;
         vector<vector<int>>ans;
        solve(nums,ds,n,ind,ans);
            return ans;
    }
};