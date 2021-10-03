#include <iostream>

using namespace std;

int main()
{
    int n,i,max=0,pos;
    cout<<"enter size of array";
     cin>>n;
     int arr[n];
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
      for(i=0;i<n;i++)
      {
          if(arr[i]>max)
          {
              max=arr[i];
              pos =i;
          }
      }
       cout<<"max element"<<" "<<max;
        cout<<"found at"<<" "<<pos;
        
    return 0;
}
