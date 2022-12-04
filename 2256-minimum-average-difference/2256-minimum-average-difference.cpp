class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return (nums[0]/1)-nums[0];

        long long size = nums.size();
        long long SUM = 0;

        for(auto x: nums){
            SUM += x;
        }

        long long i=1,j=size-1;
        long long  sumi = nums[0];
        long long sumj = SUM - sumi;
        long long sum = abs((sumi/i) - (sumj/j));

        if(sum == 0) return 0;

        pair<long long,long long> ans{sum,0};
        for(long long idx = 1; idx<size; idx++){
            sumi += nums[idx];
            sumj = SUM - sumi;
            i++;
            j--;
            if(j == 0) {
                j = 1;
                sumj=0;
            }
            sum = abs((sumi/i) - (sumj/j));
            if(sum < ans.first){
                ans.first = sum;
                ans.second = idx;
            }
            
        }
        // sum = (sumi/i) - (sumj/j);
        // if(sum < ans.first){
        //         ans.first = sum;
        //         ans.second = idx;
        // }
        return ans.second;
    }
};