class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int i=0; i<piles.size(); i++){
            pq.push(piles[i]);
        }
        for(int i=0; i<k; i++){
            int x = ceil(pq.top()/2.0);
            pq.pop();
            pq.push(x);
        }
        cout<<endl;
        int sum=0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};