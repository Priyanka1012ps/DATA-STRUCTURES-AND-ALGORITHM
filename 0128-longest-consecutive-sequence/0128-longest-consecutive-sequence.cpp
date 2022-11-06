class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         unordered_set<int> s(nums.begin(),nums.end()); 
        
       
        
//         int longest_sequence = 0;
        
//         for(int i=0; i<nums.size(); i++)
//         {
//             if(s.find(nums[i] - 1)!=s.end())
//                 continue;
            
//             else
//             {
//                 int count = 0;
//                 int current_element = nums[i];
                
//                 while(s.find(current_element) != s.end())
//                 {
//                     count++;
//                     current_element++;
//                 }
                
//                 longest_sequence = max(longest_sequence,count);
//             }
//         }
        
//         return longest_sequence;
//     }
        int ans=0;
    unordered_set<int> s;
        for(int i=0; i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(nums[i]-1)!=s.end())
                continue;
            else
            {
               int current= nums[i];
                int count=0;
                while(s.find(current)!=s.end())
                {
                    current++;
                    count++;
                }
                 ans=max(ans,count);
            }
         
        }
         
        return ans;
    }
        
};