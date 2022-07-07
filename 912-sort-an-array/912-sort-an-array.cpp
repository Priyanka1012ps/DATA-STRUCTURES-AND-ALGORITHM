class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        int left=0;
        int right = nums.size()-1;
     
       
        mergeSort(nums,left,right);
        return nums;
    }
    void mergeSort(vector<int>&arr,int l,int r)
    {
        if(l<r)
        {
            int mid =(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
        
    }
   void merge(vector<int>&arr,int l,int mid,int r)
    {
       int temp[r+1];
        int i=l;
        int j=mid+1;
        int k=l;
        
        while(i<=mid && j<=r)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++]=arr[i++];
            }
            else
            {
                temp[k++]=arr[j++];
            }
        }
        if(i>mid)
        {
            while(j<=r)
            temp[k++]=arr[j++];
        }
      else
       {
           while(i<=mid)
               temp[k++]=arr[i++];
       }
     
       for(int p=l;p<=r;p++)
       {
          arr[p]=temp[p];
       }
       
            
    }
};
// void merge(vector<int> & nums,int left,int mid,int right){
//     int a[right+1];
//     int i = left;
//     int j = mid+1;
//     int k = left;
//     while(i<=mid && j<=right){
//         if(nums[i]<nums[j]){
//             a[k] = nums[i];
//             i++;
//         }else{
//             a[k] = nums[j];
//             j++;
//         }
//         k++;
//     }
//     if(i>mid){
//         while(j<=right){
//             a[k]=nums[j];
//             k++;
//             j++;
//         }
//     }
//     else{
//         while(i<=mid){
//             a[k]=nums[i];
//             i++;
//             k++;
//         }
//     }
    
//     for(int i=left;i<=right;i++){
//         nums[i]=a[i];
//     }
// }

// void mergeSort(vector<int>&nums,int left,int right){
//     if(left<right){
//         int mid = (left+right)/2;
//         mergeSort(nums,left,mid);
//         mergeSort(nums,mid+1,right);
//         merge(nums,left,mid,right);
//     }
// }

// vector<int> sortArray(vector<int>& nums) {
//     int left = 0;
//     int right = nums.size()-1;
    
//     mergeSort(nums,left,right);
    
//     return nums;
    
// }
// };