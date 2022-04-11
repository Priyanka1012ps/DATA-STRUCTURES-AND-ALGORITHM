class Solution {
public:
    bool isPalindrome(string s) 
    {
    //    string s1=" ";
    //     string s2;
    //     stringstream ss(s);
    //     string word;
    //     while(ss >> word)
    //     {
    //         transform(word.begin(),word.end(),word.begin(), :: tolower);
    //         s1=s1+word;
    //     }
    //     for(int i=0;i<s1.size();i++)
    //     {
    //         if(!(s1[i]>=32 && s1[i]<=47 ))
    //             // s1[i].erase();
    //             s2=s2+ s1[i];
    //            if(!(s1[i]==58))
    //             s2=s2+s1[i];
    //     }
    //     cout<<s1<<endl;
    //     cout<<s2;
    //     if(s1 != s)
    //         return false;
    //     else 
    //         return true;
    // }
        vector<char>v;
          vector<char>v1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' and s[i]<='Z' or s[i]>='a' and  s[i]<='z' or s[i]>='0' and s[i]<='9')
            
                v.push_back(s[i]);
        }
        transform(v.begin(),v.end(),v.begin(),::tolower);
        v1=v;
        reverse(v1.begin(),v1.end());
        if(v1==v)
            return true;
        else
            return false;
    }
    
};