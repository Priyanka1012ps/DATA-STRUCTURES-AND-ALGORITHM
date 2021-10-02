#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,pos,j;
    cout<<"enter element to delete";
    cin>>x;
    cout<<"size of array";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=n;i++)
    {
        if(arr[i]==x)
        {
           arr[i]=arr[i+1] ;
           break;
        }
        
    }
    for(j=i+1;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
