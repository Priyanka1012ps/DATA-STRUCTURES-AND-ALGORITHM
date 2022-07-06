class Solution {
public:
    int fib(int n) 
    {
        int c;
       int a=0;
        int b=1;
        int count=2;
        if(n==1 or n==0)
            return n;
        while(count<=n)
        {
         c=a+b;
        a=b;
        b=c;
            count++;
        }
        return c;
        
    }
};