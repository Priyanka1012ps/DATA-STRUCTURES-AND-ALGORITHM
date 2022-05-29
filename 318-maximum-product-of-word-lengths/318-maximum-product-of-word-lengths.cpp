class Solution {
public:
    int maxProduct(vector<string>& v) {
       vector<vector<int>> mp(v.size(),vector<int> (26,0));
        int i,j,k;
        
                
        for (i=0; i<v.size(); i++){
            for (j=0; j<v[i].length(); j++){
                mp[i][v[i][j]-'a']++;
            }
        }
        
        int ans=0;
        
        for (i=0; i<v.size(); i++){
            for (j=i+1; j<v.size(); j++){
                bool flag=true;
                
               for (k=0; k<26; k++){
                   if (mp[i][k]>0 && mp[j][k]>0){
                       flag=false;
                       break;
                   }
               }
                
                if (flag){
                    int a=v[i].length();
                    int b=v[j].length();
                    
                   ans=max(ans,a*b);
                }
            }
        }
        
     return ans;
    }
};