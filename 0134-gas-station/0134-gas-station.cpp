class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int start =0;
        int extraFuel =0;
        int reqFuel =0;
        int n=gas.size();
        for(int i=0;i<n;i++)
        {
            extraFuel  = extraFuel + (gas[i]-cost[i]);
        
        if(extraFuel<0)
        {
            start = i+1;
            reqFuel+=extraFuel;
            extraFuel=0;
        }
        }
        if((extraFuel+reqFuel) >=0) return start;
        
        return -1;
    }
};