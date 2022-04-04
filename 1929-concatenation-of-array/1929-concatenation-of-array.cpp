
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums2;
        int n=nums2.size();
        n=2*nums.size();
        for(int i=0;i<n/2;i++)
        {
            nums2.push_back(nums[i]);
        }
        for(int i=n/2;i<n;i++)
        {
            nums2.push_back(nums[i-n/2]);
        }
        return nums2;
    }
};