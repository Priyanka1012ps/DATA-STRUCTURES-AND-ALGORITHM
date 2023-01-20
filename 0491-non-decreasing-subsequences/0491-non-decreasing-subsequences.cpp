class Solution {
public:

void back(vector<int>& nums,int i, vector<int>&ds,set<vector<int>>&res){
    int n=nums.size();
    if(i>=n){
    if(ds.size()>=2){
        res.insert(ds);
    }
        return;
    }
    if(!ds.size() || nums[i]>=ds.back()){
        ds.push_back(nums[i]);
        back(nums,i+1,ds,res);
        ds.pop_back();
    }
    back(nums,i+1,ds,res);
}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>res;
        vector<int>ds;
        back(nums,0,ds,res);
        return vector(res.begin(),res.end());
    }
};
