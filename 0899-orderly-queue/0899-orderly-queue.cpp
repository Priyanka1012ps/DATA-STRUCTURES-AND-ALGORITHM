class Solution {
public:

    string orderlyQueue(string s, int k) {
       
       if(k > 1)
       {
           sort(s.begin(),s.end());
           return s;
       }

       int n = s.length();
       string str = s;
       s += s;
       int i = 0;

       while(i <= n )
       {
           string temp = s.substr(i,n);
           if(temp < str) str = temp;
           i++;
       }


       return str;
    }
};