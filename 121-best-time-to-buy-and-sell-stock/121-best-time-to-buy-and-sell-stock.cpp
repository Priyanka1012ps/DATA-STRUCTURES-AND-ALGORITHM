class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int lsf = INT_MAX;
//         int op = 0;
//         int pist = 0;
        
//         for(int i = 0; i < prices.size(); i++){
//             if(prices[i] < lsf){
//                 lsf = prices[i];
//             }
//             pist = prices[i] - lsf;
//             if(op < pist){
//                 op = pist;
//             }
//         }
//         return op;
        // sort(prices.begin(),prices.end());
        // int diff= prices[prices.size()-1]-prices[0];
        // return diff;
        int profit=0;;
        int maxp=0;
         int mini=prices[0];
        for(int i=0;i<prices.size();i++)
        {
           
            // if(prices[i]<mini)
            // {
            //     mini=prices[i];
            // }
            mini=min(mini,prices[i]);
            profit=prices[i]-mini;
            // if(maxp < profit)
            //     maxp=profit;
            maxp=max(profit,maxp);
        }
        return maxp;
    }
    
};