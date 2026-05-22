class Solution {
  public:
    int n,m;

    int dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis,bool &touch){
        vis[i][j]=1;

        if(i==0 || j==0 || i==n-1 || j==m-1)
            touch=true;

        int cnt=1;

        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};

        for(int k=0;k<4;k++){
            int nr=i+dr[k];
            int nc=j+dc[k];

            if(nr>=0 && nc>=0 && nr<n && nc<m &&
               grid[nr][nc]==1 && !vis[nr][nc]){
                cnt+=dfs(nr,nc,grid,vis,touch);
            }
        }

        return cnt;
    }

    int cntOnes(vector<vector<int>>& grid) {

        n=grid.size();
        m=grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    bool touch=false;
                    int cells=dfs(i,j,grid,vis,touch);
                    if(!touch) ans+=cells;
                }
            }
        }

        return ans;
    }
};
