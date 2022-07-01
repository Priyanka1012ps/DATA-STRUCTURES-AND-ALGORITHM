class Solution {
private:
    static bool comp(vector<int> a, vector<int> b){
        return a[1]>b[1];
    }
        
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        if(truckSize==0) return 0;
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int maxUnit=0;
        for(auto &it:boxTypes){
            if(truckSize>=it[0]){
                maxUnit+=it[0]*it[1];
                truckSize-=it[0];
            }
            else {
                maxUnit+=truckSize*it[1];
                break;
            }
        }
        return maxUnit;
    }
};