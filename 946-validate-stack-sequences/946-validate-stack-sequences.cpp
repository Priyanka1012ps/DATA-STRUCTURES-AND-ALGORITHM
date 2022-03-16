class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> replayEvent;
        
        int itr1 = 0;
        int itr2 = 0;
        
        while(itr1!=pushed.size()){
            replayEvent.push(pushed[itr1]);
            itr1++;
            while(!replayEvent.empty() && 
                  itr2 != popped.size() &&
                  replayEvent.top() == popped[itr2]){
                replayEvent.pop();
                itr2++;
            }
        }
        
        return replayEvent.empty();
    }
};