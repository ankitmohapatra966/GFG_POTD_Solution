class Solution {
  public:
    int findCoverage(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int dr[]={1,0,0,-1};
        int dc[]={0,-1,1,0};
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(mat[i][j]==0){ for(int k=0;k<4;k++){
                    int newr=i+dr[k];
                    int newc=j+dc[k];
                    if(newr>=0 && newr<n && newc>=0 && newc<m && mat[newr][newc]==1){
                        ans++;
                    }
                }
            }
            }
        }
        return ans;
    }
};
