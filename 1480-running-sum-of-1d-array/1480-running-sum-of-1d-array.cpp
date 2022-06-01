class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currsum=0;
        int n=nums.size();
        vector<int> ans(n,0);
        
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            ans[i]=currsum;
        }
        return ans;
    }
};