class Solution {
public:
    int findCenter(vector<vector<int>>& edges)
    {
    //     int N = edges.size();
    //     vector<int>count(N+1,0);
    //     for( auto & t:  edges)
    //     {
    //         if(t[0]==);
    //         count [t[1]]++;
    //     }
    //     for(int i=1;i<=N;i++)
    //     {
    //         if(count[i]==N-1)
    //         {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
        if(edges[0][0]==edges[1][0])
            return edges[0][0];
        if(edges[0][0]==edges[1][1])
            return edges[0][0];
        else
             return edges[0][1];
    }
    
};