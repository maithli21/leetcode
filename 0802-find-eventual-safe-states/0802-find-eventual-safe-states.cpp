class Solution {
public:
    bool dfs(int node,vector<vector<int>>& graph,vector<int>& vis) {
        vis[node]=1;
        for(auto it:graph[node]){
            if(vis[it]==0){
                if(dfs(it,graph,vis))
                    return true;
            }
            else if(vis[it]==1){
                return true;
            }
        }
        vis[node]=2;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n, 0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i,graph,vis);
            }
        }
        for(int i=0;i<n;i++){
            if(vis[i] == 2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};