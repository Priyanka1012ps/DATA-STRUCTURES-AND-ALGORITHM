class Solution {
public:

    struct cmp {
        bool operator()(const vector<int>& a, const vector<int>& b) {
           return (a.back()>b.back());
        }
    };
    bool isPossible(vector<int>& nums) {
       int n = nums.size();
        
       priority_queue<vector<int>, vector<vector<int>>, cmp> pq; 
       map<int,int> freq;
       vector<vector<int>> result;
        for(auto n: nums) {
            freq[n]++;
        }
        
        for(auto n : freq) {
            int x = n.first;
            while(freq[x]>0) { 
                
                
                while (!pq.empty() && pq.top().back() < x-1) {
                    result.push_back(pq.top());
                    pq.pop();
                }
               
                if(!pq.empty() && pq.top().back()==x-1) {
                    vector<int> temp= pq.top();
                    temp.push_back(x);
                    pq.pop();
                    pq.push(temp);
                    freq[x]--;
                }
               
                else if(freq[x+1]>0 && freq[x+2]>0) {
                    vector<int> temp = {x,x+1,x+2};
                    pq.push(temp);
                    freq[x]--;
                    freq[x+1]--;
                    freq[x+2]--;
                }
                else {
                    return 0; 
                }
            }
        }
        
        for(int i=0;i<result.size();i++) {
            for(int j=0;j<result[i].size();j++) {
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
        
        return true;
    }
};