class Solution {
public:
    int countSquare(vector<vector<int>>& mat, int x) {
        int n = mat.size(), m = mat[0].size();
        int count = 0;
        
        vector<vector<long long>> pre(n + 1, vector<long long>(m + 1, 0));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                pre[i+1][j+1] = mat[i][j] + pre[i][j+1] + pre[i+1][j] - pre[i][j];
            }
        }
        
        auto getSum = [&](int r1, int c1, int r2, int c2) -> long long {
            return pre[r2+1][c2+1] - pre[r1][c2+1] - pre[r2+1][c1] + pre[r1][c1];
        };
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; i + k < n && j + k < m; k++) {
                    if (getSum(i, j, i + k, j + k) == x) {
                        count++;
                    }
                }
            }
        }
        
        return count;
    }
};
