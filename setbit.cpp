int setBits(int N) 
    {
    int c=0;
        while(N)
        {
            N = N & (N-1);
            c++;
        }
        return c;
    }
