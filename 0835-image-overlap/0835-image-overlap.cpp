class Solution {
public:
	int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
	
		int res = 0;
		vector<pair<int,int>> a, b;
		int m = img1.size(), n = img1[0].size();

		for(auto i = 0; i < m; i++){
			for(auto j = 0; j < n; j++){
				if(img1[i][j]){
					a.push_back({i, j});
				}
				if(img2[i][j]){
					b.push_back({i, j});
				}
			}
		}

		map<pair<int, int>, int> mp;

		for(auto &x : a){
			for(auto &y : b){
				mp[{x.first - y.first, x.second - y.second}]++;
				res = max(res, mp[{x.first - y.first, x.second - y.second}]);
			}
		}

		return res;
	}
};