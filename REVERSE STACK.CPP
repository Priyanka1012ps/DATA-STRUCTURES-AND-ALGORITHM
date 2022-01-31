char* reverse(char *S, int len)
{
    stack<char>st;
  
    for(int i=0;i<len;i++)
    st.push(S[i]);
    char *a= new char[len];
      int i=0;
      while(!st.empty())
      {
    a[i++]=st.top();
    st.pop();
      }
    a[i]='\0';
    return a;
}
