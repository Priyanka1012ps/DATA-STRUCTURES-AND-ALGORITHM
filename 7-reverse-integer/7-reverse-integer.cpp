class Solution {
public:
     #define UPPER_LIMIT 2147483647 / 10
    #define LOWER_LIMIT -2147483648 / 10
    int reverse(int x) 
    {
        int rev=0;
        int num=x;
//         if(x>0)
//         {
//         for(int i=x;i>0;i=i/10)
        
//             c=i%10;
//             rev=rev*10+c;
//          }
//         if(x<0)
//         {
//             x=x*-1;
//             for(int i=x;i>0;i=i/10)
        
//             c=i%10;
//             rev=rev*10+c;
//          }
//         }
         while (num != 0) {
        
        if((rev>0) && (rev> UPPER_LIMIT))
            return 0;
         if((rev<0) && (rev<LOWER_LIMIT) )
            return 0;
           
         rev =rev*10+(num%10);
             num=num/10;
         }
        return rev;
    }
};