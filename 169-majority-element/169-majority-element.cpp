class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
//         unordered_map<int,int>mp;
//         for(int i=0;i<nums.size();i++)
//         {
//            mp[nums[i]]++;
//         }
//         for(auto i= mp.begin();i!=mp.end();i++)
//         {
//             if(i->second > (nums.size()/2))
//             {
//                return i->first;
//             }
           
              
//         }
//           return -1;
//     }
    int count=0;
    int ele=0;
    for(int num : nums)
    {
    if(count==0)
    {
        ele = num;
    }
    if(ele==num)
    {
        count +=1;
    }
    else
        count -= 1;
    
    }
        return ele;
    }
};