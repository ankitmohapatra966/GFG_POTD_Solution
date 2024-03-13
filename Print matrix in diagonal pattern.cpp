class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        vector<int> ans;
        int n = mat.size();
        for(int i = 0; i < n; ++i){
            if(i % 2){
                for(int j = 0; j <= i; ++j) ans.push_back(mat[j][i - j]);
            }else{
                for(int j = i; j >= 0; --j) ans.push_back(mat[j][i - j]);
            }
        }
        for(int i = 1; i < n; ++i){
            if((i % 2) ^ (n % 2)){
                for(int j = n - i - 1; j >= 0; --j) ans.push_back(mat[i + j][n - 1 - j]);
            }else{
                for(int j = 0; j < (n - i); ++j) ans.push_back(mat[i + j][n - 1 - j]);
            }
        }
        return ans;
    }
};
