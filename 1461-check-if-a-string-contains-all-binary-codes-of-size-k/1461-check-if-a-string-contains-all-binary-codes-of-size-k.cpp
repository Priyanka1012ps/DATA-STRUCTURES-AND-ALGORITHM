class Solution {
public:
    bool hasAllCodes(string s, int k) 
{
    int n=s.size();
    unordered_set<string> set;
    int i=0;
    string add="";
    while(i<n-k+1)
    {
        set.insert(s.substr(i,k));
        i++;
    }
    
    for(auto x : set)
    cout<<x<<endl;
    
    if(set.size()==pow(2,k))
    return 1;
    else
    return 0;
}
};