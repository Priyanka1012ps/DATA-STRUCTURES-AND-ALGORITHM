class Solution {
public:
    int trap(vector<int>& h) 
    {
    //    int n= height.size();
    //  int mxl[n];
    //  int mxr[n];
    //  mxl[0]=height[0];
    //  for(int i=1;i<n;i++)
    //  {
    //      mxl[i]=max(mxl[i-1],height[i]);
    //  }
    //  mxr[n-1]=height[n-1];
    //  for(int i=n-2;i>=0;i--)
    //  {
    //      mxr[i]=max(mxr[i+1],height[i]);
    //  }
    //  int water[n];
    //  for(int i=0;i<n;i++)
    //  {
    //   water[i]=min(mxl[i], mxr[i])-height[i];
    // }
    // long long sum=0;
    // for(int i=0;i<n;i++)
    //  {
    //   sum=sum+water[i];
    // }
    // return sum;
    // }
        int size= h.size();
   int  mxl [size];
        int  mxr [size];
        // vector<int>mxr;
        mxl[0]=h[0];
        for(int i=1;i<size;i++)
        {
            mxl[i] = max(mxl[i-1],h[i]) ;
        }
        mxr[size-1] =  h[size-1];
        
        for(int i=h.size()-2;i>=0;i--)
        {
            mxr[i]=( max(mxr[i+1],h[i]) );
        }
        // vector<int>water;
        int water[size];
        for(int i=0;i<size;i++)
        {
            water[i]= min(mxl[i],mxr[i])-h[i];
            // water.push_back(l);
        }
        long long sum=0;
         for(int i=0;i<size;i++)
        {
             sum=sum+water[i];
         }
        return sum;
    }

};