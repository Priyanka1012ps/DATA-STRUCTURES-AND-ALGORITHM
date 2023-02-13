class Solution {
public:
    
    int numOddsLessThan(int x){
        return (x+1)/2;
    }
    
    int countOdds(int low, int high) {
        return numOddsLessThan(high) - numOddsLessThan(low-1);
    }
};
