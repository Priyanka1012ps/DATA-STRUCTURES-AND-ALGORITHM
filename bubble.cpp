#include<bits/stdc++.h>
using namespace std ;
 
 int main ()
 {
     int i,j,n,temp;
     cin>>n;
     int arr[n];
     for(i=0;i<n;i++)
     {
         cin>>arr[n];
     }
     for(i=0;i<n-1;i++)
     {
        bool swapped =false;
         for(j=0;j<n-i-1;i++)
         {
             if(arr[j]<arr[j+1])
             {
                 swap(arr[j],arr[j+1]);
                // swapped = true;
         }
         
         
     }
    if(swapped == false)
     {
         break;
     }
 }
  for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
 }
