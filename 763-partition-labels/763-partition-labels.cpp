class Solution {
public:
vector<int> partitionLabels(string s) {
vector v(26,-1);
for(int i=s.size()-1;i>=0;i--){
if(v[s[i]-'a']==-1)v[s[i]-'a']=i;

    }
    vector<int>res;
    int j=-1,l=0;
    for(int i=0;i<s.size();i++){
      if(v[s[i]-'a']>l)l= v[s[i]-'a'];
         if(i==l){
            
            res.push_back(l-j);
            j=l;
        }
    }
    return res;
}
};