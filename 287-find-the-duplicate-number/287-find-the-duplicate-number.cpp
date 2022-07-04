class Solution
{
    public:
        int findDuplicate(vector<int> &nums)
        {
           	//         int res;
           	//         unordered_map<int,int>mp;
           	//         for(int i=0;i < nums.size();i++)

           	//             mp[nums[i]]++;

           	//         for(auto i :mp)
           	//         {
           	//             if(i.second>1)

           	//                 res=i.first;

           	//         }
           	//         return res;
            int slow = nums[0];
            int fast = nums[0];
            do {
                slow = nums[slow];
                fast = nums[nums[fast]];
            }
            while (slow != fast);
            {
                fast = nums[0];
            }
            while (slow != fast)
            {

                slow = nums[slow];
                fast = nums[fast];
            }
            return slow;
        }
};