class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int minMoves = 0;

        int left = 0, right = nums.size() - 1, mid = left + (right - left) / 2;

        for (const auto &num : nums)
        {
            if (num != nums[mid]) {
                int diff = abs(num - nums[mid]);
                minMoves += diff;
            }
        }

        return minMoves;
    }
};