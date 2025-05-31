class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        // code here
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> q;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        q.push({matrix[0][0],0,0});
        vis[0][0]=1;
        int x[] = {-1,0,1,0};
        int y[] = {0,1,0,-1};
        while(!q.empty()){
            int node = q.top()[0];
            int row = q.top()[1];
            int col = q.top()[2];
            k--;
            if(k==0) return node;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = row+x[i];
                int ncol = col+y[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({matrix[nrow][ncol],nrow,ncol});
                }
            }
        }
        return -1;
    }
};
