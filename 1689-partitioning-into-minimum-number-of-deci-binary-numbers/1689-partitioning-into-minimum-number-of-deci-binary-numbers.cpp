class Solution {
public:
    int minPartitions(string n) {
        
        int count=0;
        bool doContinue = true;
        
        while(doContinue){
            doContinue = false;
            for(auto &ch : n){
                if( ch >= '1' ) ch -= 1, doContinue=true;
            }
            count += 1;
        }
        return count-1;
    }
};