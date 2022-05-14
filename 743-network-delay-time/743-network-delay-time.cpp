class Solution {
public:
    int networkDelayTime(vector<vector<int>>& vec, int vertices, int source) {
        map<int,list<pair<int,int>>>adj;
	for(auto it:vec)
	{
		int x=it[0];
		int y=it[1];
		int z=it[2];
		adj[x].push_back(make_pair(y,z));
		
	}
	vector<int>ans(vertices+1);
	for(int i=1;i<=vertices;i++)
	{
		ans[i]=INT_MAX;
	}
	
	set<pair<int,int>>st;
	ans[source]=0;
	st.insert(make_pair(0,source));
	while(!st.empty())
	{
		auto top=*(st.begin());
		int nodedis=top.first;
		int topnode=top.second;
		st.erase(st.begin());
		for(auto it:adj[topnode])
		{
			if(nodedis+it.second<ans[it.first])
			{
				st.erase({ans[it.first],it.first});
				ans[it.first]=nodedis+it.second;
				st.insert({ans[it.first],it.first});
			}
		}
		
	}
	int maxx=INT_MIN;
        for(auto it:ans)
        {
            if(it==INT_MAX)
                return -1;
            
            if(it>maxx)
                maxx=it;
        }
        
        return maxx;
    }
};