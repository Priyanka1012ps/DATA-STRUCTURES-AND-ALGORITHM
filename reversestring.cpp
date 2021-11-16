#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="",s2=" ";
      getline(cin,s);
    int i,n;
    n=s.length();
    for(i=0;i<n;i++)
    {
        char ch=s[i];
        
        if(ch!=' ')
        {
            s1=s1+ch;
        }
        else
        {
            s2=s1+s2+" ";
        }
        s1=" ";
    }
    cout<<s2<<endl;
}
