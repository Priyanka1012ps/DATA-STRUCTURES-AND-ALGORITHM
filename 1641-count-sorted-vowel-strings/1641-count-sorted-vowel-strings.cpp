class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>ans{1,1,1,1,1};   
        for(int i=2;i<=n;i++)
        {
           for(int j=3;j>=0;j--)
           {
               ans[j]+=ans[j+1];  
			  
           }
        }
        int fa=0;
        for(int i=0;i<5;i++)
        {
            fa+=ans[i]; 
        }
        return fa;
    }
};