// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
        vector<long long >LeftIndex(long long arr[],int n)
        {
        vector <  long long > left;
        stack <pair<  long long ,int>>s;
        int psuedo=-1;
        for(int i=0;i<n;i++)
        { 
           if (s.size()==0)
            {
                left.push_back(psuedo);
            }
            else if(s.size()>0 && s.top().first<arr[i])
            {
                left.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=arr[i])
            {
                while(s.size()>0 && s.top().first>=arr[i])
                {
                    s.pop();
                }
                if(s.size()==0)
            {
                left.push_back(psuedo);
            }
           else
           left.push_back(s.top().second);
                
            }
            s.push({arr[i],i});
        }
        return left;
    }
        
        vector<long long >RightIndex(long long arr[],int n)
    {
         vector <  long long > right;
        stack <pair<  long long ,int>>s1;
        int psuedo1=n;
        for(int i=n-1;i>=0;i--)
        { 
           if (s1.size()==0)
            {
                right.push_back(psuedo1);
            }
            else if(s1.size()>0 && s1.top().first<arr[i])
            {
               right.push_back(s1.top().second);
            }
            else if(s1.size()>0 && s1.top().first>=arr[i])
            {
                while(s1.size()>0 && s1.top().first>=arr[i])
                {
                    s1.pop();
                }
                if(s1.size()==0)
            {
               right.push_back(psuedo1);
            }
           else
          right.push_back(s1.top().second);
                
            }
            s1.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long >left  =LeftIndex(arr,n);
        vector<long long >right =RightIndex(arr,n);
        vector<long long> area;
        for(int i=0;i<n;i++)
        {
            long long ans=(right[i]-left[i]-1 )*arr[i];
            area.push_back(ans);
        }
        sort(area.begin(),area.end());
        reverse(area.begin(), area.end());
        return area[0];
        
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
