class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        stack<int>st;
        vector <int>v;
        unordered_map<int,int>mp;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
                mp[nums2[i]]=-1;
            
               else if( st.size()>0 and st.top () > nums2[i])
                {
                    mp[nums2[i]] =st.top();
                    // st.pop();
                }
                else if( st.size()>0 and st.top () <= nums2[i])
                {
                    while(st.size()>0 and st.top () <= nums2[i])
                    {
                        st.pop();
                    }
                    if(st.size()==0)
                       mp[nums2[i]]= -1;
                    else
                      mp[nums2[i]] =st.top();
                }
            st.push(nums2[i]);
            
                    
            }
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(mp[nums1[i]]);
        }
        
        // reverse(v.begin(),v.end());
        return v;
    }
    
};