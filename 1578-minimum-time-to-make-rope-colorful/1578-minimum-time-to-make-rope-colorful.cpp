class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int curr=0; int prev=0; int n= colors.size(); 
        vector<priority_queue<int, vector<int>, greater<int>>> vec;
        while(curr<n){
            if(colors[curr]==colors[prev]){
                priority_queue<int, vector<int>, greater<int>> temp;
                while(curr<n && colors[curr]==colors[prev]){
                    temp.push(neededTime[curr]);
                    curr++;
                }
                vec.push_back(temp);
                
                
                prev=curr;
            }
        }
        int cost=0;
        for(int i=0; i<vec.size(); i++){
            auto pq=vec[i];
            while(pq.size()>1){
                cost+=pq.top();
                pq.pop();
            }
        }
        return cost;
    }
};