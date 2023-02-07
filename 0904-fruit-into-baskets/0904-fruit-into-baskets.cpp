class Solution {
public:
    int totalFruit(vector<int>& v) {
        int n=v.size();
        vector<int> vis(1e5+5,0);
        int i=0,j=0,ans=0,type=0;
        while(j<n){
            if(vis[v[j]]==0) type++;
            vis[v[j]]++;
            while(type>2 && i<=j){
                vis[v[i]]--;
                if(vis[v[i]]==0){
                    type--;
                }
                i++;
            }
            ans=max(ans,(int)(j-i+1));
            j++;
        }
        return ans;
    }
};