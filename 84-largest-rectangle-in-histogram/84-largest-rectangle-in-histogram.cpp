class Solution {
public:
   // vector<int> NSR(vector<int> arr,int n)
   // {
   //     stack<pair<int,int>> s;
   //     vector<int> v;
//        for(int i=n-1;i>=0;i--)
//        {
//            if(s.size()==0)
//                v.push_back(n);
//            else if(s.size()>0 && s.top().first < arr[i])
//                v.push_back(s.top().second);
//                else if(s.size()>0 && s.top().first >= arr[i])
//                {
//                    while(s.size()>0 && s.top().first>=arr[i])
//                        s.pop();
//                    if(s.size()==0)
//                v.push_back(n);
//                    else  v.push_back(s.top().second);
//                } s.push({arr[i],i});
//        }
//        reverse(v.begin(),v.end());
//        return v;
//    } 
//      vector<int> NSL(vector<int> arr,int n)
//      {
//           stack<pair<int,int>> s;
//        vector<int> v;
//        for(int i=0;i<n;i++)
//        {
//            if(s.size()==0)
//                v.push_back(-1);
//            else if(s.size()>0 && s.top().first < arr[i])
//                v.push_back(s.top().second);
//                else if(s.size()>0 && s.top().first >= arr[i])
//                {
//                    while(s.size()>0 && s.top().first>=arr[i])
//                        s.pop();
//                    if(s.size()==0)
//                v.push_back(-1);
//                    else  v.push_back(s.top().second);
//                } s.push({arr[i],i});
//        }
//        return v;
//      }
//     int largestRectangleArea(vector<int>& heights) {
//         vector<int> left, right,area;
//         right=NSR(heights,heights.size());
//         left=NSL(heights,heights.size());
//         for(int i=0;i<left.size();i++)
//         { 
//             int x=(right[i]-left[i]-1)*heights[i];
//             area.push_back(x);
//         }
//             sort(area.begin(), area.end());
//         reverse(area.begin(), area.end());

//         return area[0];
       vector<int>NSR(vector<int>arr,int n)
       {
           stack<pair<int,int>> st;
       vector<int> v;
      
            for(int i=n-1;i>=0;i--)
       {
           if(st.size()==0)
               v.push_back(n);
           else if(st.size()>0 and st.top().first<arr[i])
               v.push_back(st.top().second);
           else if (st.size()>0 and st.top().first>=arr[i])
           {
               while(st.size()>0 and st.top().first>=arr[i])
               {
                   st.pop();
               }
               if(st.size()==0)
                   v.push_back(n);
               else
                   v.push_back(st.top().second);
           }
           st.push({arr[i],i});
       }
            reverse(v.begin(),v.end());
           return v;
       }
      vector<int>NSL(vector<int>arr,int n)
       {
           stack<pair<int,int>> st1;
       vector<int> v1;
       for(int i=0;i<n;i++)
       {
           if(st1.size()==0)
               v1.push_back(-1);
           else if(st1.size()>0 and st1.top().first<arr[i])
               v1.push_back(st1.top().second);
           else if (st1.size()>0 and st1.top().first>=arr[i])
           {
               while(st1.size()>0 and st1.top().first>=arr[i])
               {
                   st1.pop();
               }
               if(st1.size()==0)
                   v1.push_back(-1);
               else
                   v1.push_back(st1.top().second);
           }
           st1.push({arr[i],i});
       }
          return v1;
      }
     int largestRectangleArea(vector<int>& heights)
     {
         vector<int>left,right,area;
         left=NSL(heights,heights.size());
         right=NSR(heights,heights.size());
         for(int i=0;i<heights.size();i++)
         {
           int x=(right[i]-left[i]-1)*heights[i];
            area.push_back(x);
         }
              sort(area.begin(), area.end());
        reverse(area.begin(), area.end());

        return area[0];
     }
    
};