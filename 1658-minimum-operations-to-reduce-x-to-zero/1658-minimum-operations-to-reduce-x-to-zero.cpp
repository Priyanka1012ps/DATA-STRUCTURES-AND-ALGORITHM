class Solution {
public:
    int minOperations(vector<int> &nums, int x)
    {
        int max_length = -1;
        

        int sum = accumulate(nums.begin(), nums.end(), 0);
        int target = sum - x;

        int start = 0, end = 0, n = nums.size();
        sum = 0;
        
        while (end < n)
        {
            sum += nums[end];
            while (start <= end && sum > target)
            {
                sum -= nums[start];
                start++;
            }

            if (sum == target)
            {
                max_length = max(max_length, end - start + 1);
            }
            end++;
        }
        if(max_length == -1)
            return -1;
        return n - max_length;
    }
};