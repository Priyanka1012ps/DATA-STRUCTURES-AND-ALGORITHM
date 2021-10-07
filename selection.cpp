#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,count=0,temp,min;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
