class Solution {
public:
    int calPoints(vector<string>& s) 
    {
        vector<int>ans;
        int a=0;
        int c;
        
        for(int i=0;i<s.size();i++)
        {
            int n=ans.size();
            if(s[i]=="C")
            {
                ans.pop_back();
            }
                 else if(s[i]=="D")
                {
                    c=(ans[n-1]);
                 
                    ans.push_back(2*c);
                }
                  else  if(s[i]=="+")
                    {
                        int p=(ans[n-1]);
                        int q=(ans[n-2]);
//                         s.pop_back();
                        
//                         s.pop_back();
                        ans.push_back(p+q);
                            
                        }
            else
                
                ans.push_back(stoi(s[i]));
            
                    
        }
        for(int i=0;i<ans.size();i++)
        {
            a=a+ans[i];
        cout<<ans[i]<<" ";
        }
        return a;
    }
    
};