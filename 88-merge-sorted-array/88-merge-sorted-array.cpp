class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
     {
        int p=m+n-1;
         for(int i=0;i<nums2.size();i++)
       {
             ;
            // if(i>=m)
            // {
               int k=0;
           nums1[p]=nums2[i];
           k++;
           p--;
        }
        sort(nums1.begin(),nums1.end());
       }
        // for(int i=0;i<nums1.size();i++)
        // {
        //     if(nums1[i]<nums2[i])
        // }
        
    
};