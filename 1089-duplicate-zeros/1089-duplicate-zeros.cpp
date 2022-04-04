class Solution {
public:
    void duplicateZeros(vector<int>& arr)
    {
        int n=arr.size();
        vector<int>v;
        for(int i=0;i<arr.size();i++)
        {
            v.push_back(arr[i]);
            if(arr[i]==0)
            {
                v.push_back(0);
            }
        }
        for(int i=0;i<n;i++)
            arr[i]=v[i];
    }
};