class Solution {
public:        
    int lengthOfLongestSubstring(string s) {        
       vector<int> freq(256,-1);        
        int left=0;
        int len=0;
            int right=0;
        // for(int i=0;i<s.size();i++)
        // {
        
        while(right<s.size())
        {
           if(freq[s[right]]!=-1)
                left=max(left,freq[s[right]]+1);
         
               
            
            freq[s[right]]=right;
        len =max (len,right-left+1);
             right++;
        }
        return len;
    }
};