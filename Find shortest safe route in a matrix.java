class Solution {
    public int findShortestPath(int[][] mat) {
        int n = mat.length;
        int m = mat[0].length;
        int[][] ans = new int[n][m];
        int[] delrow = {-1, 0, 1, 0};
        int[] delcol = {0, 1, 0, -1};
        for (int i = 0; i < n; i++) {
            Arrays.fill(ans[i], 1);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    ans[i][j] = 0;
                    for (int k = 0; k < 4; k++) {
                        int nr = delrow[k] + i;
                        int nc = delcol[k] + j;
                        if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                            ans[nr][nc] = 0;
                        }
                    }
                }
            }
        }
        Queue<int[]> queue = new LinkedList<>();
        for (int i = 0; i < n; i++) {
            if (ans[i][0] == 1) {
                queue.offer(new int[]{i, 0, 1});
            }
        }
        int[][] vis = new int[n][m];
        while (!queue.isEmpty()) {
            int[] a = queue.poll();
            int row = a[0];
            int col = a[1];
            int count = a[2];
            vis[row][col] = 1;
            if (col == m - 1) {
                return count;
            } else {
                for (int i = 0; i < 4; i++) {
                    int nr = delrow[i] + row;
                    int nc = delcol[i] + col;
                    if (nr >= 0 && nr < n && nc >= 0 && nc < m && vis[nr][nc] == 0 && ans[nr][nc] == 1) {
                        vis[nr][nc] = 1;
                        queue.offer(new int[]{nr, nc, count + 1});
                    }
                }
            }
        }
        return -1;
    }
}
