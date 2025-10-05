class Solution {
    using pii = pair<int, int>;
    int n;
    vector<pair<pii, char>> dirs = {{{-1, 0}, 'U'}, {{0, 1}, 'R'}, {{1, 0}, 'D'}, {{0, -1}, 'L'}};
  private:
    void recur(int r, int c, vector<vector<int>>& mat, vector<vector<bool>>& vis, string curr, vector<string>& ans) {
        if (r == n - 1 && c == n - 1) {
            ans.push_back(curr);
            return;
        }
        
        vis[r][c] = true;
        for (int i = 0; i < dirs.size(); ++i) {
            int nr = r + dirs[i].first.first;
            int nc = c + dirs[i].first.second;
            char ch = dirs[i].second;
            if (nr >= 0 && nr < n && nc >= 0 && nc < n && !vis[nr][nc] && mat[nr][nc])
                recur (nr, nc, mat, vis, curr + ch, ans);
        }
        vis[r][c] = false;
    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& mat) {
        // code here
        n = mat.size();
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        vector<string> ans;
        
        
        recur(0, 0, mat, vis, "", ans);
        sort(begin(ans), end(ans));
        return ans;
    }
};
