class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]<1)
//             {
//                 nums[i]=nums[i]*-1;
//             }
//         }
        
//         int mul=1;
//         for(int i=0;i<3;i++)
//         {
            
//             mul= mul*nums[i];
//         }
         int mul1=1;
        int mul2=1;
        mul1=nums[n-1]*nums[n-2]*nums[n-3];
        mul2=nums[0]*nums[1]*nums[n-1];
        return max(mul1,mul2);
    }
};