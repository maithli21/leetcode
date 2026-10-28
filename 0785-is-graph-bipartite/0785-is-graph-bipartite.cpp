class Solution {
public:
    bool checkdfs(int node,int c,vector<int>&color,vector<int>&vis,vector<vector<int>>& graph){
        vis[node]=1;
        color[node]=c;
        for(auto i:graph[node]){
            if(!vis[i]){
                if(!checkdfs(i,!c,color,vis,graph)) return false;
            }
            else{
                if(color[i]==color[node])return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n,0);
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(!checkdfs(i,0,color,vis,graph)) return false;
            }
        }
        return true;        
    }
};