class Solution {
public:
    string pushDominoes(string dominoes) {
        char prev='.';
        int prevind=0, i=0;
        while(i<dominoes.length())
        {
            if(dominoes[i]=='L')
            {
                if(prev=='.' || prev=='L')
                {
                    while(prevind<i)
                        dominoes[prevind++] = 'L';
                }
                else
                {
                    int dist = (i-prevind-1)/2;
                    
                    int j=prevind+1;
                    while(j<prevind+dist+1)
                        dominoes[j++] = 'R';
                    
                    j=i-1;
                    while(j>i-dist-1)
                        dominoes[j--] = 'L';
                }
                prevind = i;
                prev = 'L';
            }
            else if(dominoes[i]=='R')
            {
                if(prev=='R')
                {
                    while(prevind<i)
                        dominoes[prevind++] = 'R';
                }
                prevind = i;
                prev = 'R';
            }
            i++;
        }
        if(prev=='R')
        {
            while(prevind<dominoes.length())
                dominoes[prevind++] = 'R';
        }
        return dominoes;
    }
};