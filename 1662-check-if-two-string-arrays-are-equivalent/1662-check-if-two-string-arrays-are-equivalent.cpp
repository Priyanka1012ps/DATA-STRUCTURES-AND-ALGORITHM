class Solution {
    int i,j,ii,jj,n,nn,c,cc;
public:
    bool arrayStringsAreEqual(vector<string>& s, vector<string>& ss) {
        n = s.size(); nn = ss.size();
        while(i<n || ii<nn){
            if(i<n)c++;
            if(ii<nn)cc++;
            if(c!=cc) return false;
            if(s[i][j++]!=ss[ii][jj++]) return false;
            if(j==s[i].size())i++,j=0;
            if(jj==ss[ii].size())ii++,jj=0; 
        }
        return true;
    }
};