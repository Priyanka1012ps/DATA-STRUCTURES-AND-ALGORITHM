class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>map;
        for(int i=0;i<tasks.size();i++)
            map[tasks[i]]++;
        int res=0;    
        for(auto a:map)
        {
            if( a.second <2)return -1;
            else
            {
                res+= a.second/3;
                res += (a.second%3 !=0);
                
            }
        } 
        return res; 
    }
};