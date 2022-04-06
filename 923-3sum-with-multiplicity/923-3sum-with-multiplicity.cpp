class Solution {
public:
int threeSumMulti(vector<int> & arr, int target)
{
int ans=0;
int mod=1e9+7;
unordered_map<int,int>m;//sum of pairs, no of pairs with given sum
for(int i=1;i<arr.size();i++)
{
int temp=target-arr[i];
//adding number of pairs before current position which is given required sum
ans=ans+m[temp];
ans=ans%mod;
for(int j=0;j<i;j++)
{
m[arr[i]+arr[j]]++;
}
}
return ans;
}
};