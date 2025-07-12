class Solution {
  public:
    int maxGold(vector<vector<int>>& mat) {
        int n = mat.size() ;
        int m = mat[0].size() ;
        int ans = 0 ;
        for(int c = m - 2 ; c >= 0 ; c --){
            for(int r = n - 1 ; r >= 0 ; r --){
                int res = mat[r][c + 1] ;
                if(r > 0) res = max(res , mat[r - 1][c + 1]) ;
                if(r < n - 1) res = max(res , mat[r + 1][c + 1]) ;
                mat[r][c] += res ;  
                ans = max(ans , mat[r][c]) ;
            }
        }
        return ans ;
    }
};
