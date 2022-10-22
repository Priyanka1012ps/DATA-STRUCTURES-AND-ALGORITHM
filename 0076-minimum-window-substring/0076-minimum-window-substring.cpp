class Solution {
public:

string minWindow(string s, string t) {
    vector<int> map(128,0);
    int i=0,j=0,n=s.length(),m=t.length(),len=INT_MAX,count=0;
    string ans="";
    if(s==t){
        return s;
    }
    if(m>n){
        return ans;
    }
    for(int i=0;i<m;i++){
        map[t[i]]++;
    }
    while(j<n){
        if(map[s[j++]]-->0){
            count++;
        }
        while(count==m){
            if(j-i<len){
                len=j-i;
                ans=s.substr(i,j-i);
            }
            if(map[s[i++]]++>-1){
                count--;
            }
        }
    }
    return ans;
}
};