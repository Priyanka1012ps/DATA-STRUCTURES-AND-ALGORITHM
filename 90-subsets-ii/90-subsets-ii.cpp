#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    void solve(int ind, vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
        if(i!=ind and nums[i]==nums[i-1])
            continue;
            ds.push_back(nums[i]);
            solve(i+1,nums,ds,ans);
            ds.pop_back();
        }
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans ;
        vector<int>ds;
        int ind=0;
       // int n=nums.size();
        sort(nums.begin(),nums.end());
        solve(ind,nums,ds,ans);
        return ans;
    }
};