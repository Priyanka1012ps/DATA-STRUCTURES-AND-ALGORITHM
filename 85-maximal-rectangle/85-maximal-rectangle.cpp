class Solution {
public:
    
         vector<int >LeftIndex(vector<int>arr,int n)
        {
        vector <  int > left;
        stack <pair<  int ,int>>s;
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
        
        vector<int >RightIndex(vector<int>arr,int n)
    {
         vector <  int > right;
        stack <pair<  int ,int>>s1;
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
    int getMaxArea(vector<int>arr, int n)
    {
        vector<int >left  =LeftIndex(arr,n);
        vector<int >right =RightIndex(arr,n);
        vector<int> area;
        for(int i=0;i<n;i++)
        {
            int ans=(right[i]-left[i]-1 )*arr[i];
            area.push_back(ans);
        }
        sort(area.begin(),area.end());
        reverse(area.begin(), area.end());
        return area[0];
        
    }
    int maximalRectangle(vector<vector<char>>& matrix)
    {
       
        vector<int>v;
        int rows=matrix.size();
        int col=matrix[0].size();
        for(int j=0;j<col;j++)
        {
            v.push_back(matrix[0][j]-'0');
        }
        int mx=getMaxArea(v,v.size());
        cout<<mx<<" ";
         for(int i=1;i<rows;i++)
         {
         for(int j=0;j<col;j++)
         {
             if(matrix[i][j]=='0')
             {
                 v[j]=0;
             }
             else
             {
                 v[j]=v[j]+ matrix[i][j]-'0';
                  cout<<v[j]<<" ";
             }
            
                 
        }
             mx= max(mx,getMaxArea(v,v.size()));
        cout<<mx;
}
          return mx;
    }
  
    
};