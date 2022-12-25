class Solution {
public:
    int bs(int h,int l,int target,vector<int>&vec)
    {
        int mid=(l+h)/2;
        if(l>h) return mid+1;
        if(vec[mid]>target) h=mid-1;
        else l=mid+1;
        return bs(h,l,target,vec);

    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> vec(nums.size());
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            vec[i]=s;
        }
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i]>=vec[vec.size()-1]){queries[i]=vec.size();continue;}
            queries[i]= queries[i]<vec[0]?0:bs(vec.size()-1,0,queries[i],vec);
        }
        return queries;
    }
};