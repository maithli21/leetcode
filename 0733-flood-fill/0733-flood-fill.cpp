class Solution {
public:
    void dfs( int sr, int sc, int color,vector<vector<int>>& image,vector<vector<int>>& ans,int iniclr){
        ans[sr][sc]=color;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int r=sr+dr[i];
            int c=sc+dc[i];
            if(r>=0 && r<n && c>=0 && c<m && image[r][c]==iniclr && ans[r][c]!=color){
                dfs(r,c,color,image,ans,iniclr);
            }   
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
        int initialclr=image[sr][sc];
        dfs(sr,sc,color,image,ans,initialclr);
        return ans;
    }
};