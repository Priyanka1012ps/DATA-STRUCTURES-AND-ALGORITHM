// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string haystack, string needle)
{
      int flag;
        int x=haystack.size();
        int i;
        int y=needle.size();
        for( i=0;i<x;i++)
        {
            if(haystack[i]==needle[0])
            {
                flag=0;
            for(int j=0;j<y;j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    flag=1;
                    break;
                }
            }
        }
             if(flag==0)
        return i;
    }
       
        return -1;
    }
