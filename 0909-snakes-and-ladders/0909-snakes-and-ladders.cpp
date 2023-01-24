class Solution {
    int solve(unordered_map<int,pair<int,int>>&mp,vector<vector<int>>&board,int curr,int &N,vector<int>&dist){
        queue<int>q;
        q.push(curr);
        dist[1]=0;
        while(!q.empty()){
            auto topVal=q.front();
            q.pop();
            for(int i=topVal+1;i<=min(topVal+6,N*N);i++){
                int val=board[mp[i].first][mp[i].second];
                int dest=val==-1?i:val;
                if(dist[dest]==-1){
                    dist[dest]=dist[topVal]+1;
                    q.push(dest);
                }
            }
        }
        return dist[N*N];
    }
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        unordered_map<int,pair<int,int>>mp;
        
        bool leftToRight=true;
        int cnt=1;
        for(int i=n-1;i>=0;i--){
            if(leftToRight){
                for(int j=0;j<n;j++){
                    mp[cnt++]={i,j};
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    mp[cnt++]={i,j};
                }
            }
            leftToRight=!leftToRight;
        }
        vector<int>dist((n*n)+1,-1);
        return solve(mp,board,1,n,dist);
    }
};