class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> mp; 
        priority_queue<int> pq; 

        for(int i=0; i<word.length(); i++){  
            mp[word[i]]++;
        }

        for(auto &it : mp){  
            pq.push(it.second);
        }

        int counter = 1; int count = 0;
        int minPush = 0;
        while(!pq.empty()){ 
            minPush+=counter*pq.top();
            pq.pop();
            count++;
            if(count%8==0) counter++;
        }

        return minPush;

    }
};