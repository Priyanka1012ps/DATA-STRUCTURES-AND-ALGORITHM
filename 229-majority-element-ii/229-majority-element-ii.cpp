class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {
            int c1 = 0;
            int c2 = 0;
            int ele1 = -1;
            int ele2 = -1;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i]== ele1)

                    c1++;

                else if (nums[i] == ele2)
                    c2++; 
                
                else if (c1 == 0)
                {
                    ele1 = nums[i];
                    c1 = 1;
                }
                else if (c2 == 0)
                {
                    ele2 = nums[i];
                    c2 = 1;
                }
                else
                {
                    c1--;
                    c2--;
                }
            }
            int count1 = 0;
            int count2 = 0;
            vector<int> v;
           int sz=nums.size() ;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == ele1)
                    count1++;
                if (nums[i] == ele2)
                    count2++;
            }
            if (count1 > sz/3)
                v.push_back(ele1);
            if (count2 >sz/3)
                if(ele1 != ele2)
                v.push_back(ele2);
            return v;
        }
};