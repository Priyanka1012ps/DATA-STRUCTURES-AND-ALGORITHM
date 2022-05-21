class Solution {
public:
    vector<vector<int> > memo;
    int help(vector<int> &coins,int amount,int idx){
        if(idx>=0 && memo[amount][idx]!=-1){
            return memo[amount][idx];
        }
        if(amount==0){
            return 0;
        }
        if(idx<0){
            return 10000000;
        }
        if(coins[idx]<=amount){
            return memo[amount][idx]= min(1+help(coins,amount-coins[idx],idx),help(coins,amount,idx-1));
        }
        return memo[amount][idx]=help(coins,amount,idx-1);
    }
    int coinChange(vector<int>& coins, int amount) {
        memo=vector<vector<int> >(10005,vector<int>(15,-1));
        int x=help(coins,amount,coins.size()-1);
        
        if(x==10000000){
            return -1;
        }
        return x;
    }
};