class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n=isWater.size();
        int m=isWater[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int dr[]={0,0,-1,1};
        int dc[]={-1,1,0,0};

        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int dis=q.front().second;
            q.pop();
            ans[r][c]=dis;
            for(int i=0;i<4;i++){
                int nr=dr[i]+r;
                int nc=dc[i]+c;
                if(nr>=0 && nc>=0 && nr<n && nc<m && !vis[nr][nc]){
                    vis[nr][nc]=1;
                    q.push({{nr,nc},dis+1});
                }
            }
        }
        return ans;   
    }
};