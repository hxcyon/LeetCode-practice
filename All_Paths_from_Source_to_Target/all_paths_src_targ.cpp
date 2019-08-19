class Solution {
public:
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& allpath, vector<int> path, int N){
        
        int i;
        if(graph[N].size() == 0){
            return;
        }
        
        for(i = 0; i < graph[N].size(); i++){
            
            vector<int> temp = path;
            temp.push_back(graph[N][i]);
            
            if(graph.size() -1 == graph[N][i])
            {
                allpath.push_back(temp);
            }
            else{
                dfs(graph, allpath, temp, graph[N][i]);
            }
        }
        return;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> allpath;
        //vector<int> path;
        vector<int> path = {0};
        
        dfs(graph, allpath, path, 0);
        return allpath;
    }
};
