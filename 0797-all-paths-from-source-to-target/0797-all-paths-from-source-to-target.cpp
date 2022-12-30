class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path{0};
        vector<vector<int>> allPaths;
        searchAllPaths(graph, path, allPaths);
        return allPaths;
    }

    void searchAllPaths(vector<vector<int>>&graph, vector<int>& path, vector<vector<int>>& allPaths){
        int curNode = path.back();
        if(curNode == graph.size()-1)
            allPaths.push_back(path);
        else for(auto p : graph[curNode]){
            path.push_back(p);
            searchAllPaths(graph, path, allPaths);
            path.pop_back();
        }
    }
};