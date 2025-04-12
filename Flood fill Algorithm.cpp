class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // Code here
        int n = image.size(), m = image[0].size(), oldColor = image[sr][sc];
        
        if(newColor == oldColor) return image;
        queue<int> q; 
        
        image[sr][sc] = newColor;
        q.push(sr * m + sc);
        
        vector<int> change = {-1, 0, 1, 0};
        
        while(!q.empty()) {
            int front = q.front(); q.pop();
            int row = front / m, col = front % m;
            
            for(int k = 0; k < 4; k++) {
                int nrow = row + change[k], ncol = col + change[(k + 1) % 4];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == oldColor) {
                    image[nrow][ncol] = newColor;
                    q.push(nrow * m + ncol);
                }
            }
            
        }
        
        return image;
    }
};
