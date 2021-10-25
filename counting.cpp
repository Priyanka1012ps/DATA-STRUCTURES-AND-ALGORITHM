#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n>>k;
    int a[n],b[n];
    int count[k+1] = {0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    
     for(i=0;i<n;i++)
    {
        ++count[a[i]];
    }
     for(i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
     for(i=n-1;i>=0;i--)
    {
       b[--count[a[i]]]=a[i];
    }
     for(i=0;i<n;i++)
    {
       cout<<b[i]<<" ";
    }
    
}
