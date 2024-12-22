class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n = mat.size();
        int m = mat[0].size();
        int i=0,j=m-1;
        while(i<n and j>=0)
        {
            if(mat[i][j]==x)
                return true;
            else if(mat[i][j]<x)
                i++;
            else
                j--;
        }
        return false;
    }
};
