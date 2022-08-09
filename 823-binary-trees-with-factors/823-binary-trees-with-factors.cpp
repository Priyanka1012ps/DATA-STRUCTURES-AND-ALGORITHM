class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
         sort(arr.begin(),arr.end());
         int mod = 1e9 + 7;
        map<int, long long> mp;
        
        for(int i=0; i<arr.size(); i++){
              mp[arr[i]] = 1;
            for(int j=0; j<i; j++){
                if(arr[i] % arr[j] == 0){
                    mp[arr[i]] += (long long)(mp[arr[j]] * mp[arr[i] / arr[j]]) % mod;
                    mp[arr[i]] %= mod;
                }
            }
        }
          long long ans = 0;
        
        for(auto it = mp.begin(); it!=mp.end(); it++){
             ans= (ans + it->second)  % mod;
        }
           return ans;
        
    }
};