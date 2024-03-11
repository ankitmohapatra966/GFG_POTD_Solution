class Solution{
public: 
 
 int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
 {
        int i = 0, j = n * n - 1;
        int ans = 0;
        while (i < n * n && j >= 0) {
            int r1 = i / n, c1 = i % n;
            int r2 = j / n, c2 = j % n;
            int sum = mat1[r1][c1] + mat2[r2][c2];
            if (sum == x) {
                ans++;
                i++;
                j--;
            } else if (sum < x) {
                i++;
            } else {
                j--;
            }
        }
        
     return ans;
 }
};
